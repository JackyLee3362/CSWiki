import os
import glob
with os.scandir(os.getcwd()) as entries:
    for entry in entries:
        if entry.name.startswith('.'):
            print(entry.name)
        if entry.name.endswith('.py'):
            print(entry.name)


for name in glob.glob('*[0-9]*.txt'):
    print('glog',name)