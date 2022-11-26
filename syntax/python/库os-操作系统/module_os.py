# %% 操作系统结构模块
import os 
# %% 操作系统内置模块
dir(os)
len(dir(os))
# %% 当前文件的模块
dir()
len(dir())
# %%
os.path, os.pathsep
os.environ
os.curdir, os.pardir,os.defpath

# %%
os.path.abspath('.')

# %% 返回当前工作路径的父目录
os.path.dirname(os.getcwd()) 



# %%
import sys
sys.path[0]
sys.path

# %%
