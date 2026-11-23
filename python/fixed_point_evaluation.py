"""Parse candidate formats and evaluate bit-accurate classifier predictions."""

import argparse
import re

import numpy as np


CLIP_GROUPS = ("later_feature", "original_feature", "weight", "bias")


def parse_format(value):
    match = re.fullmatch(r"b(\d+)_f(\d+)", value, flags=re.IGNORECASE)
    if match:
        bits, frac = map(int, match.groups())
        if bits >= 2 and 0 <= frac <= bits:
            return bits, frac
    raise argparse.ArgumentTypeError("expected B<number>_F<number> with B >= 2 and 0 <= F <= B")


def expected_class(features, weights, biases, acc_bits=16):
    minimum = -(1 << (acc_bits - 1))
    maximum = (1 << (acc_bits - 1)) - 1
    scores = []
    for class_weights, score in zip(weights, biases, strict=True):
        # Match the RTL's descending index order and saturate after each add.
        for feature, weight in zip(reversed(features), reversed(class_weights), strict=True):
            score = max(minimum, min(maximum, score + feature * weight))
        scores.append(score)
    return max(range(len(scores)), key=scores.__getitem__)


def quantise_array(values, bits, frac_bits):
    scale = 1 << frac_bits
    rounded = np.rint(values * scale)
    limit = 1 << (bits - 1)
    clamped = rounded.clip(-limit, limit - 1)
    excess = np.abs(rounded - clamped)
    return clamped.astype(np.int64), int(np.count_nonzero(excess)), float(excess.max(initial=0) / scale)


def record_clipping(row, group, result):
    quantised, count, max_excess = result
    row[f"{group}_clips"] += count
    row[f"{group}_max_clip_excess"] = max(row[f"{group}_max_clip_excess"], max_excess)
    return quantised.tolist()


def evaluate_format(bits, frac_bits, models, datasets, references):
    acc_bits = 2 * bits + 4
    row = {"B": bits, "F": frac_bits, "acc_bits": acc_bits}
    for group in datasets:
        row[f"{group}_matches"] = 0
        row[f"{group}_total"] = sum(len(vectors) for vectors in datasets[group].values())
    for group in CLIP_GROUPS:
        row[f"{group}_clips"] = 0
        row[f"{group}_max_clip_excess"] = 0.0

    for note, model in models.items():
        weights = record_clipping(row, "weight", quantise_array(model["weights"], bits, frac_bits))
        biases = record_clipping(row, "bias", quantise_array(model["biases"], acc_bits, 2 * frac_bits))
        for group, batches in datasets.items():
            features = record_clipping(
                row, f"{group}_feature", quantise_array(batches[note], bits, frac_bits)
            )
            references_for_note = references[group][note].tolist()
            row[f"{group}_matches"] += sum(
                expected_class(vector, weights, biases, acc_bits) == reference
                for vector, reference in zip(features, references_for_note, strict=True)
            )
    return row
