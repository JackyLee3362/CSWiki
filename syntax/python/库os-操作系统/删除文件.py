import os
cwd = os.getcwd()
file_path = os.path.join(cwd, 'file.txt')
try:
    os.remove(file_path)
except FileNotFoundError as e:
    print(e)