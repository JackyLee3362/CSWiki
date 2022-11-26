import os
from pathlib import Path
cwd = os.getcwd()
'''
第1种写法
'''
def f1():
    with os.scandir(cwd) as entries:
        for entry in entries:
            if entry.is_file():
                (file_name, file_ext) = os.path.splitext(entry.name)
                print(f"文件全名：{entry.name} = 文件名:{file_name} + 拓展:{file_ext}")
            # elif entry.is_dir():
            #     print("文件夹：", entry.name)
f1()
'''
第2种写法
'''
def f2():
    basepath = Path(cwd)
    for entry in basepath.iterdir():
        if entry.is_file():
            print(entry.name)
        elif entry.is_dir():
            print(entry.name)
'''
老版写法
'''
def f3():
    for entry in os.listdir():
            print(entry)