import os
from pathlib import Path
import time
path = "D:/Dropbox/Space/diary/2024"

file_name = input("请输入文件名: ")
file_format = "%Y-%m-%d_01-{}.md".format(file_name)
file_path = time.strftime(file_format, time.localtime())
file_path = Path(path).joinpath(file_path)
if (file_path.exists()):
    print("当前文件存在")
else:
    with open(file_path, 'w'):
        print("创建文件成功")
