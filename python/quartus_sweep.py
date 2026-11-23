"""Build fixed-point classifier candidates and collect Quartus reports."""

import csv
import re
import shutil
import subprocess
from pathlib import Path
from tempfile import mkdtemp

from .convert_models_to_rom import ROOT, generate_rom


QUARTUS = Path("/mnt/c/altera_lite/25.1std/quartus/bin64/quartus_sh.exe")
PROJECT = "b10_f5_full_classifier"
HARDWARE_FIELDS = (
    "logic_elements", "registers", "dsp_blocks", "fmax_mhz",
    "restricted_fmax_mhz", "setup_slack_ns", "hold_slack_ns", "meets_clock_timing",
)


def stage_project(work_dir, bits, frac):
    template = ROOT / "rtl" / f"{PROJECT}.qsf"
    settings = template.read_text()
    sources = re.findall(
        r'^set_global_assignment -name (?:SYSTEMVERILOG_FILE|SDC_FILE) (\S+)$',
        settings, re.MULTILINE,
    )
    for name in sources:
        target = work_dir / name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(template.parent / name, target)
    shutil.copy2(template.with_suffix(".qpf"), work_dir)

    settings, count = re.subn(
        r"^set_parameter -name BITS \d+$", f"set_parameter -name BITS {bits}",
        settings, flags=re.MULTILINE,
    )
    if count != 1:
        raise ValueError(f"Expected one BITS assignment in {template}")

    tag = f"b{bits}_f{frac}"
    generate_rom(bits, frac, rom_dir=work_dir / "rom")
    settings = settings.rstrip() + "\n"
    settings += (
        f"set_parameter -entity full_classifier -to u_load -name WEIGHTS_FILE rom/{tag}_weights.mem\n"
        f"set_parameter -entity full_classifier -to u_load -name BIASES_FILE rom/{tag}_biases.mem\n"
    )
    (work_dir / template.name).write_text(settings)


def parse_reports(report_dir):
    def read(extension):
        return (report_dir / f"{PROJECT}.{extension}").read_text(encoding="cp1252")

    fit_summary = read("fit.summary")
    fit_counts = {
        label.strip(): int(count.replace(",", ""))
        for label, count in re.findall(r"^([^:\n]+): *([\d,]+)", fit_summary, re.MULTILINE)
    }
    fit_report = read("fit.rpt")
    timing_report = read("sta.rpt")
    timing_summary = read("sta.summary")

    def used_count(label):
        if label not in fit_counts:
            raise ValueError(f"Missing Fitter metric: {label}")
        return fit_counts[label]

    multiplier_elements = used_count("Embedded Multiplier 9-bit elements")
    blocks = re.search(r"^; *Embedded Multiplier Blocks *; *([\d,]+) *;", fit_report, re.MULTILINE)
    if multiplier_elements and blocks is None:
        raise ValueError("Missing physical multiplier block count")

    corner = re.search(
        r"^; Slow 1200mV 85C Model Fmax Summary *;\n(.*?)(?=\n[ \t]*\n|\Z)",
        timing_report, re.MULTILINE | re.DOTALL,
    )
    clock = re.search(
        r"^; *([\d.]+) MHz *; *([\d.]+) MHz *; *clk *;",
        corner[1] if corner else "", re.MULTILINE,
    )
    if clock is None:
        raise ValueError("Missing clk Fmax in the Slow 1200mV 85C timing table")

    def worst_slack(check):
        values = re.findall(
            rf"^Type *: [^\n]+ Model {check} 'clk' *\nSlack *: *([+-]?[\d.]+)",
            timing_summary, re.MULTILINE,
        )
        if not values:
            raise ValueError(f"Missing clk {check.lower()} slack")
        return min(map(float, values))

    setup_slack = worst_slack("Setup")
    hold_slack = worst_slack("Hold")
    return {
        "logic_elements": used_count("Total logic elements"),
        "registers": used_count("Total registers"),
        "dsp_blocks": int(blocks[1].replace(",", "")) if blocks else 0,
        "fmax_mhz": float(clock[1]),
        "restricted_fmax_mhz": float(clock[2]),
        "setup_slack_ns": setup_slack,
        "hold_slack_ns": hold_slack,
        "meets_clock_timing": min(setup_slack, hold_slack) >= 0,
    }


def dominates(a, b):
    """Return whether a uses no more resources and is at least as fast, with a strict improvement."""
    return (
        a["logic_elements"] <= b["logic_elements"]
        and a["dsp_blocks"] <= b["dsp_blocks"]
        and a["fmax_mhz"] >= b["fmax_mhz"]
        and (
            a["logic_elements"] < b["logic_elements"]
            or a["dsp_blocks"] < b["dsp_blocks"]
            or a["fmax_mhz"] > b["fmax_mhz"]
        )
    )


def pareto_frontier(rows):
    """Return the non-dominated rows. Call with feasible designs only."""
    return [
        candidate
        for candidate in rows
        if not any(dominates(other, candidate) for other in rows)
    ]


def compile_rows(rows, quartus, runs_dir):
    runs_dir = runs_dir.resolve()
    runs_dir.mkdir(parents=True, exist_ok=True)
    sweep_dir = Path(mkdtemp(prefix="sweep-", dir=runs_dir))
    output = sweep_dir / "results.csv"
    print(f"Writing results to {output}", flush=True)

    failures = 0
    fields = [
        *rows[0], *HARDWARE_FIELDS, "status", "error", "quartus_log",
        "feasible", "pareto_optimal",
    ]
    with output.open("w", newline="") as destination:
        writer = csv.DictWriter(destination, fieldnames=fields)
        writer.writeheader()
        for row in rows:
            bits, frac = int(row["B"]), int(row["F"])
            work_dir = sweep_dir / f"b{bits}_f{frac}"
            work_dir.mkdir()
            log_path = work_dir / "quartus.log"
            row.update(status="ok", quartus_log=str(log_path))
            try:
                with log_path.open("w") as log:
                    stage_project(work_dir, bits, frac)
                    print(f"Compiling B{bits}_F{frac}", flush=True)
                    subprocess.run(
                        [str(quartus), "--flow", "compile", PROJECT],
                        cwd=work_dir,
                        stdout=log,
                        stderr=subprocess.STDOUT,
                        check=True,
                        timeout=900,
                    )
                row.update(parse_reports(work_dir / "output_files"))
            except (OSError, ValueError, subprocess.SubprocessError) as error:
                failures += 1
                row.update(status="failed", error=str(error))
                print(f"B{bits}_F{frac} failed. See {log_path}", flush=True)
            else:
                print(f"Finished B{bits}_F{frac}", flush=True)

            row["feasible"] = row["status"] == "ok" and row["meets_clock_timing"]
            writer.writerow(row)
            destination.flush()

    feasible_rows = [row for row in rows if row["feasible"]]
    for row in rows:
        row["pareto_optimal"] = False
    for row in pareto_frontier(feasible_rows):
        row["pareto_optimal"] = True

    # Preserve the live CSV until the complete frontier is ready.
    completed_output = output.with_suffix(".tmp")
    with completed_output.open("w", newline="") as destination:
        writer = csv.DictWriter(destination, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)
    completed_output.replace(output)

    print(f"Wrote {len(rows)} rows to {output} ({failures} failed)", flush=True)
    return int(failures > 0)
