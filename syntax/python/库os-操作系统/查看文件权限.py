import os
path = 'python'
try:
    print(oct(os.stat(path).st_mode))
except FileNotFoundError as e:
    print(e)