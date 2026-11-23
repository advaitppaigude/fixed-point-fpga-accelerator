"""
user specifies candidate formats
|
v
numerical evaluation
(fp32 agreement, accuracy, clipping)
|
v
configure and compile RTL
(python -> quartus command line)
(quartus is installed on windows and i'm working on WSL2
but it can invoke Windows exe directly)
|
v
extract synthesis metrics
(LEs, registers, DSPs, Fmax)
|
v
write to csv and consider feasible/Pareto designs
"""
import argparse
import csv
from pathlib import Path

import numpy as np

from .convert_models_to_rom import ROOT
from .fixed_point_evaluation import evaluate_format, parse_format
from .quartus_sweep import QUARTUS, compile_rows

START = 6
END = 10

# only live evaluation needs the external feature extraction code
try:
    from .sweep_bit_fraction_grid import load_vectors
    from .sweep_later_session import load_models
except ImportError as error:
    LIVE_EVALUATION_IMPORT_ERROR = error
else:
    LIVE_EVALUATION_IMPORT_ERROR = None


NUMERICAL_CSV = ROOT / "results/numerical_exploration/bit_fraction_sweep.csv"
DEFAULT_FORMATS = [(bits, frac) for bits in range(START, END + 1) for frac in range(bits)]


def load_numerical_csv(path, formats):
    rows = {}
    with path.open(newline="") as source:
        for row in csv.DictReader(source):
            row.pop("rank", None)
            rows[int(row["B"]), int(row["F"])] = row

    missing = [f"B{bits}_F{frac}" for bits, frac in formats if (bits, frac) not in rows]
    if missing:
        raise ValueError(
            f"Missing numerical results for {', '.join(missing)}. "
            "Supply a numerical CSV covering those formats or recompute their results."
        )
    return [rows[candidate] for candidate in formats]


def evaluate_recordings(recordings_dir, formats):
    if LIVE_EVALUATION_IMPORT_ERROR is not None:
        raise ImportError(
            "--recordings-dir requires the numerical evaluation dependencies. "
            f"{LIVE_EVALUATION_IMPORT_ERROR}"
        ) from LIVE_EVALUATION_IMPORT_ERROR
    recordings = [recordings_dir / f"test_{i}.wav" for i in range(1, 31)]
    missing = [path.name for path in recordings if not path.is_file()]
    if missing:
        raise ValueError(f"Missing recordings in {recordings_dir}: {', '.join(missing)}")

    models = load_models()
    datasets = load_vectors(models, recordings)
    references = {
        group: {
            note: np.argmax(vectors @ models[note]["weights"].T + models[note]["biases"], axis=1)
            for note, vectors in batches.items()
        }
        for group, batches in datasets.items()
    }
    return [evaluate_format(bits, frac, models, datasets, references) for bits, frac in formats]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--format", action="append", type=parse_format,
        help="Candidate such as B8_F5. Repeat to select multiple formats.",
    )
    parser.add_argument("--quartus", type=Path, default=QUARTUS, help="Path to quartus_sh.exe")
    parser.add_argument("--runs-dir", type=Path, default=ROOT / "dse_runs", help="Parent directory for sweep artifacts")
    numerical_input = parser.add_mutually_exclusive_group()
    numerical_input.add_argument(
        "--numerical-csv", type=Path, default=NUMERICAL_CSV,
        help="Read precomputed numerical results (defaults to the checked-in sweep CSV).",
    )
    numerical_input.add_argument(
        "--recordings-dir", type=Path,
        help="Recompute numerical results using test_1.wav through test_30.wav.",
    )
    args = parser.parse_args()

    formats = list(dict.fromkeys(args.format or DEFAULT_FORMATS))
    quartus = args.quartus.resolve()
    if not quartus.is_file():
        parser.error(f"Quartus executable does not exist: {quartus}")

    try:
        if args.recordings_dir is None:
            rows = load_numerical_csv(args.numerical_csv, formats)
        else:
            rows = evaluate_recordings(args.recordings_dir, formats)
    except (ImportError, OSError, ValueError, KeyError) as error:
        parser.error(str(error))

    return compile_rows(rows, quartus, args.runs_dir)


if __name__ == "__main__":
    raise SystemExit(main())
