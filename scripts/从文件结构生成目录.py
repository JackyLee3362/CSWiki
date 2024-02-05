from pathlib import Path
import json
import os, sys, shutil

def check_path(path):
    # 检查路径 and 文件是否存在
    if isinstance(path, str):
        path = Path(path)
    elif not isinstance(path, Path):
        raise TypeError('需要str或者Path对象')
    if not path.exists():
        raise FileNotFoundError('路径上的文件不存在')
    

def generate_dir_structure(root_dir):
    tree = {}
    for dirpath, dirnames, filenames in os.walk(root_dir):
        current_dir = tree
        path_components = dirpath.split(os.sep)
        for component in path_components:
            current_dir = current_dir.setdefault(component, {})
        for filename in filenames:
            if filename == 'README.md':
                current_dir[filename] = None
    return tree


if __name__ == '__main__':
    src = "D:\\Dropbox\\MyGithubRepo\\npee-408-note\\doc"
    ds = generate_dir_structure(Path(src))
    t = ds
    for e in src.split("\\"):
        t = t.get()
    ds.get("D:").get("")
    with open('./myutils/test.json', 'w', encoding='utf-8') as f:
        f.write(json.dumps(ds, ensure_ascii=False))
