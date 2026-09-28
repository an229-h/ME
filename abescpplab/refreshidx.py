from pathlib import Path

readme = Path("README.md")
start = "<!-- FILE_INDEX_START -->"
end = "<!-- FILE_INDEX_END -->"
ignored = {".git", ".github", "node_modules", "build", "dist", "target", ".venv", "venv", "__pycache__", "refreshidx.py"}
files = sorted(
	path for path in Path(".").rglob("*")
	if path.is_file() and path != readme
	and not any(part in ignored for part in path.parts)
)
links = "\n".join(f"- [`{path.as_posix()}`]({path.as_posix()})" for path in files)
content = readme.read_text()
before, remainder = content.split(start, 1)
_, after = remainder.split(end, 1)
readme.write_text(before + start + "\n" + (links + "\n" if links else "") + end + after)