import os
file_name = 'test'
try:
    os.mkdir("test")
except FileExistsError as e:
    print(e)
file_name = 'test/123'
try:
    os.makedirs(file_name,0o770)
except FileExistsError as e:
    print(e)
