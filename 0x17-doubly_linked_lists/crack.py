import base64
import io
import os
import tempfile
import uncompyle6
from github import Github

GITHUB_KEY = os.environ.get("GITHUB_KEY")

g = Github(GITHUB_KEY)
items = g.search_code("filename:secrets.pyc")
for item in items:
    print(f"DECOMPILING REPO https://github.com/{item.repository.full_name}")
    print(f"OWNER TYPE: {item.repository.owner.type}")
    try:
        contents = base64.b64decode(item.content)
        with tempfile.NamedTemporaryFile(suffix=".pyc") as f:
            f.write(contents)
            f.seek(0)

            out = io.StringIO()
            uncompyle6.decompile_file(f.name, out)
            out.seek(0)
            print(out.read())
    except Exception as e:
        print(e)
        print(f"COULD NOT DECOMPILE REPO https://github.com/{item.repository.full_name}")
        continue
    print("\n\n\n")