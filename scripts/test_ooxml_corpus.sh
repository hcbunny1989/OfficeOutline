#!/usr/bin/env bash
set -euo pipefail

BIN="${1:-./office-outline}"
EXAMPLES_DIR="${2:-examples}"

mkdir -p "$EXAMPLES_DIR"

run_file() {
  local input="$1"
  local type="$2"
  local base
  local output

  base="$(basename "$input")"
  base="${base%.*}"
  output="${EXAMPLES_DIR}/${base}.md"

  "$BIN" "$input" -o "$output"
  test -s "$output"
  grep -q "type=\"${type}\"" "$output"
}

for input in corpus/xlsx/*.xlsx; do
  run_file "$input" xlsx
  output="${EXAMPLES_DIR}/$(basename "${input%.xlsx}").md"
  grep -q '<table ' "$output"
  grep -q '<table_row ' "$output"
  grep -q '<table_cell ' "$output"
done

for input in corpus/pptx/*.pptx; do
  run_file "$input" pptx
  output="${EXAMPLES_DIR}/$(basename "${input%.pptx}").md"
  grep -q '<part ' "$output"
  grep -q '<shape ' "$output"
  grep -q '<paragraph ' "$output"
  grep -q '<plain_text ' "$output"
done

grep -q '<chart ' "$EXAMPLES_DIR/profile_results_8400.md"
grep -q '<chart ' "$EXAMPLES_DIR/Result.md"
