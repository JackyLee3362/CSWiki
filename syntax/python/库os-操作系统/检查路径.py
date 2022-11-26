import sys,os
import logging


''' 检查当前目录是否是执行文件的父目录
经测试，Jupyter-notebook和code runner结果不一致
'''
cwd = os.getcwd() # os.path.abspath('.')
this_file_parent_dir = os.path.dirname(__file__)
if cwd == this_file_parent_dir:
    print("当前工作目录 就是 该文件目录")
else:
    print("当前工作目录 不是 该文件目录")





    