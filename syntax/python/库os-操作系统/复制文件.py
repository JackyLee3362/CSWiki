import shutil
import os
cwd = os.getcwd()
print(cwd)
src = os.path.join(cwd, 'test.py')
dst = os.path.join(cwd, 'scripts','test.py')
print(src)
print(dst)
shutil.copy(src, dst)