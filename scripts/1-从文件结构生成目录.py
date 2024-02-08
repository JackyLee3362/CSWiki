from pathlib import Path
from rich.console import Console
import shutil

console = Console()
README_MD = 'readme.md'

def check_path_valid(path: Path):
    """判断一个路径是否存在

    Args:
        path (Path): _description_
    """
    if path.exists():
        return True

def is_readme_file(path:Path) -> bool:
    """判断一个文件是不是readme文件

    Args:
        path (Path): 路径参数

    Returns:
        bool: True表示是Readme False表示不是
    """
    if path.is_file() and path.name.lower() in README_MD:
        return True
    return False
    

def generate_dir_structure(path:Path, prefix:str) -> dict:
    """从文件结构生成文件目录

    Args:
        path (Path): 文件路径
        prefix (str): 文件路径前缀（因为要生成相对路径）

    Returns:
        dict: 返回目录结构
    """

    tree = dict()
    for entry in path.iterdir():
        # 如果是到底的readme文件，且
        if is_readme_file(entry):
            # 加入记录
            tree[entry.parent.name] = prefix + README_MD
        elif entry.is_dir():
            tree[entry.name] = generate_dir_structure(entry, prefix+entry.name+'/')
        else:
            ... # 既不是readme文件，也不是文件夹，不处理
    return tree



def generate_readme_from_dict(tree:dict, depth:int=0) -> str:
    """从目录树结构生成对应的readme.py

    Args:
        tree (dict): 目录树字典结构
        depth (int, optional): 树的深度. Defaults to 0.

    Returns:
        str: 返回要生成的md字符串
    """
    content = []
    template =(depth+1)*"#" + " " + "[{}]({})"
    for key, value in tree.items():
        if isinstance(value, dict):
            content.append(generate_readme_from_dict(value, depth+1))
        else:
            content.insert(0, template.format(key, value))
    return "\n\n".join(content)

def run_with_path(path):
    path_obj = Path(path)
    prefix = f"./{path_obj.name}/"
    tree = generate_dir_structure(path_obj, prefix)
    # console.print(tree)
    content = generate_readme_from_dict(tree)
    # console.print(content)
    readme_path = path_obj.joinpath('README.md')
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write(content)
    console.print("文件输出到",readme_path)
    

if __name__ == '__main__':
    # 如果有其他文件目录需要生成，可以注册到这里
    src = [
        "./doc",
        "./doc/操作系统",
        "./doc/计算机网络",
        "./doc/计算机组成原理",
        "./doc/数据结构"
    ]
    for path in src:
        run_with_path(path)
    shutil.move("./doc/README.md", "./README.md")
    

    
