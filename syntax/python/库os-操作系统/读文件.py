import os
'''读取文件'''
file_name = 'test'
this_file_parent_dir = os.path.dirname(__file__)
file_path = os.path.join(this_file_parent_dir, file_name)
with open(file_path, 'r') as f:
    txt = f.read()
    print(txt)