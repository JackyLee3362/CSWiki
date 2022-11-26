import os
file_name = 'test'
'''按行读取文件'''
this_file_parent_dir = os.path.dirname(__file__)
file_path = os.path.join(this_file_parent_dir,file_name)
if os.path.exists(file_path):
    with open(file_path, 'r') as f:
        for idx,line in enumerate(f):
            print(f'第{idx+1}行：',line,end='')
else:
    print("Error: 文件不存在")