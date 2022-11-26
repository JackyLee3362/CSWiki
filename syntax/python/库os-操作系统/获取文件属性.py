import os
cwd = os.getcwd()
# 第1种写法
with os.scandir(cwd) as entries:
    for entry in entries:
        info = entry.stat()
        print("第1种写法",info.st_mtime)
from pathlib import Path
# 第2种写法
basepath = Path(cwd)
for entry in basepath.iterdir():
    info = entry.stat()
    print("第2种写法",info.st_mtime)

print(os.stat(os.getcwd()))