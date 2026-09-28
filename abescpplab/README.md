# C++ Lab | ABES Engineering College

An index of the programs and resources in this repository.

## Contents

<!-- AUTO-INDEX:START -->
<!-- AUTO-INDEX:END -->

To generate or refresh the index from files in the repository, run this from the repository root:

```bash
python3 - <<'PY'
from pathlib import Path

readme = Path("README.md")
start = "<!-- AUTO-INDEX:START -->"
end = "<!-- AUTO-INDEX:END -->"
ignored = {".git", ".github", ".vscode", "node_modules", "__pycache__"}
files = sorted(
	path for path in Path(".").rglob("*")
	if path.is_file()
	and path != readme
	and not any(part in ignored or part.startswith(".") for part in path.parts)
)
entries = "\n".join(f"- [`{path.as_posix()}`]({path.as_posix()})" for path in files)
if not entries:
	entries = "- No files found yet."

text = readme.read_text()
before, remainder = text.split(start, 1)
_, after = remainder.split(end, 1)
readme.write_text(f"{before}{start}\n{entries}\n{end}{after}")
PY
```

