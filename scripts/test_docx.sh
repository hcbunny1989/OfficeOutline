#!/usr/bin/env bash
set -euo pipefail

BIN="${1:-./office-outline}"
DOC="corpus/北大博士研究生毕业论文格式.docx"
OUT="examples/北大博士研究生毕业论文格式.md"

"$BIN" "$DOC" -o "$OUT"
test -s "$OUT"

for tag in paragraph text_run plain_text table table_cell drawing_object hyperlink formula image shape; do
  grep -q "<${tag}" "$OUT"
done

grep -q 'fontName=' "$OUT"
grep -q 'fontSize=' "$OUT"
grep -q 'fontColor=' "$OUT"
grep -q 'bold=' "$OUT"
grep -q 'italic=' "$OUT"
grep -q 'underline=' "$OUT"
grep -q 'alignment=' "$OUT"
grep -q 'indent' "$OUT"
grep -q 'listId=' "$OUT"
grep -q 'rowspan=' "$OUT"
grep -q 'colspan=' "$OUT"
grep -q '<bookmark ' "$OUT"
grep -q 'dataAvailable=' "$OUT"
grep -q 'description=' "$OUT"
