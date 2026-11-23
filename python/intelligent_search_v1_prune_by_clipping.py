"""
this script evaluates fixed-point formats usnig extracted features (data/features.csv)
and exported models (the .npz files)

formats are filtered by clipping count and maximum clipping excess/error

for those that remain, check prediction agreement

compile formats that pass both checks
"""

import argparse
import csv
from pathlib import Path

import numpy as np

from .convert_models_to_rom import MODEL_DIR, NOTES, ROOT
from .fixed_point_evaluation import CLIP_GROUPS, evaluate_format, parse_format, quantise_array
from .quartus_sweep import QUARTUS, compile_rows


START_BITS = 5
END_BITS = 8
DEFAULT_FORMATS = [(bits, frac) for bits in range(START_BITS, END_BITS + 1) for frac in range(bits)]
MAX_CLIP_EXCESS = 0.5
ORIGINAL_FEATURES = ROOT / "data/features.csv"
LATER_FEATURES = ROOT / "data/later_features.npz"

# load each note's coefficients, parameters and feature order from exported model file
def load_models():
    models = {}
    for note in NOTES:
        with np.load(MODEL_DIR / f"{note}.npz", allow_pickle=False) as archive:
            models[note] = {
                key: archive[key]
                for key in ("feature_columns", "weights", "biases", "means", "scales")
            }
    return models

# keep complete rows for supported notes and return features in model column order
def load_original_csv(path, columns):
    with path.open(newline="") as source:
        reader = csv.DictReader(source)
        missing = {"note", *columns} - set(reader.fieldnames or [])
        if missing:
            raise ValueError(f"{path} is missing columns: {', '.join(sorted(missing))}")
        rows = [row for row in reader if row["note"] in NOTES and all(row[c] for c in columns)]
    return [[float(row[c]) for c in columns] for row in rows], [row["note"] for row in rows]


def load_feature_datasets(models, later_path):
    columns = models[NOTES[0]]["feature_columns"]
    if any(not np.array_equal(columns, model["feature_columns"]) for model in models.values()):
        raise ValueError("Exported models differ in feature column order")

    groups = {"original": load_original_csv(ORIGINAL_FEATURES, columns)}
    # include later session vectors when an archive is available
    if later_path is not None:
        with np.load(later_path, allow_pickle=False) as archive:
            if not np.array_equal(columns, archive["feature_columns"]):
                raise ValueError("Feature archive column order differs from the exported models")
            groups["later"] = archive["later_features"], archive["later_notes"]

    datasets = {}
    for group, (features, notes) in groups.items():
        features = np.asarray(features, dtype=float)
        notes = np.asarray(notes)
        if notes.ndim != 1 or len(notes) == 0 or features.shape != (len(notes), len(columns)):
            raise ValueError(f"{group} features must have one {len(columns)}-value row per note")
        if not np.isin(notes, NOTES).all():
            raise ValueError(f"{group} features contain unknown note names")
        if not np.isfinite(features).all():
            raise ValueError(f"{group} features contain non-finite values")

        datasets[group] = {
            note: (features[notes == note] - model["means"]) / model["scales"]
            for note, model in models.items()
        }
    if later_path is None:
        datasets["later"] = {note: np.empty((0, len(columns))) for note in NOTES}
    return datasets

# check total num of clipped values and largest excess of any one value
def passes_clipping(metrics, max_clips, max_clip_excess):
    count = sum(int(metrics[f"{group}_clips"]) for group in CLIP_GROUPS)
    excess = max(float(metrics[f"{group}_max_clip_excess"]) for group in CLIP_GROUPS)
    return (max_clips is None or count <= max_clips) and excess <= max_clip_excess


def evaluate_formats(formats, models, datasets, max_clips, max_clip_excess):
    values = {
        **{
            f"{group}_feature": np.concatenate(list(batches.values())).ravel()
            for group, batches in datasets.items()
        },
        "weight": np.concatenate([model["weights"].ravel() for model in models.values()]),
        "bias": np.concatenate([model["biases"] for model in models.values()]),
    }

    # check clipping first so rejected formats skip fixed-point inference
    survivors = []
    for bits, frac in formats:
        clipping = {}
        for group, array in values.items():
            # biases use accumulator width and product's 2F fractional bits
            width, fraction = (2 * bits + 4, 2 * frac) if group == "bias" else (bits, frac)
            _, count, excess = quantise_array(array, width, fraction)
            clipping[f"{group}_clips"] = count
            clipping[f"{group}_max_clip_excess"] = excess
        if passes_clipping(clipping, max_clips, max_clip_excess):
            survivors.append((bits, frac))

    if not survivors:
        return []


    # compute winning class (in fp number format) once per recording,
    # grouped by session and note
    # reuse predictions across formats bcs independent of b and f
    references = {
        group: {
            note: np.argmax(vectors @ models[note]["weights"].T + models[note]["biases"], axis=1)
            for note, vectors in batches.items()
        }
        for group, batches in datasets.items()
    }
    return [evaluate_format(bits, frac, models, datasets, references) for bits, frac in survivors]


def disagreement_count(row):
    return sum(int(row[f"{group}_total"]) - int(row[f"{group}_matches"])
               for group in ("original", "later"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--format", action="append", type=parse_format, help="Repeat to select formats such as B10_F5.")
    parser.add_argument("--quartus", type=Path, default=QUARTUS)
    parser.add_argument("--runs-dir", type=Path, default=ROOT / "dse_runs")
    parser.add_argument(
        "--features-npz", type=Path,
        help="Later-session feature archive (defaults to data/later_features.npz if present).",
    )
    parser.add_argument("--max-clips", type=int, help="Maximum total number of clipped values.")
    parser.add_argument("--max-clip-excess", type=float, default=MAX_CLIP_EXCESS,
                        help="Maximum clipping excess for any one value (default: 0.5).")
    parser.add_argument("--max-disagreements", type=int, default=0)
    parser.add_argument("--numerical-only", action="store_true", help="List survivors without running Quartus.")
    args = parser.parse_args()
    if (args.max_clips is not None and args.max_clips < 0) or args.max_disagreements < 0:
        parser.error("Clip and disagreement counts must be non-negative")
    if not np.isfinite(args.max_clip_excess) or args.max_clip_excess < 0:
        parser.error("--max-clip-excess must be finite and non-negative")

    formats = list(dict.fromkeys(args.format or DEFAULT_FORMATS))
    later_path = args.features_npz
    if later_path is None and LATER_FEATURES.exists():
        later_path = LATER_FEATURES

    try:
        models = load_models()
        datasets = load_feature_datasets(models, later_path)
        original_count = sum(map(len, datasets["original"].values()))
        later_count = sum(map(len, datasets["later"].values()))
        print(f"Evaluating {original_count} original and {later_count} later-session feature vectors.", flush=True)

        rows = evaluate_formats(formats, models, datasets, args.max_clips, args.max_clip_excess)
        survivors = [row for row in rows if disagreement_count(row) <= args.max_disagreements]
    except (OSError, ValueError, KeyError) as error:
        parser.error(str(error))

    print(f"{len(rows)}/{len(formats)} formats passed clipping. "
          f"{len(survivors)} also passed agreement.", flush=True)
    for row in survivors:
        print(f"B{row['B']}_F{row['F']}", flush=True)
    if args.numerical_only or not survivors:
        return 0

    quartus = args.quartus.resolve()
    if not quartus.is_file():
        parser.error(f"Quartus executable does not exist: {quartus}")
    return compile_rows(survivors, quartus, args.runs_dir)


if __name__ == "__main__":
    raise SystemExit(main())
