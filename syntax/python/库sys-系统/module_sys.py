import sys

print("The list of command line arguments:\n", sys.argv)

print(sys.version)
print(sys.version_info)
print(locals())
print(sys.builtin_module_names) # 内置模块
# https://docs.python.org/zh-cn/3.10/tutorial/modules.html#standard-modules
print(sys.path) 
sys.path.append('/ufs/guido/lib/python')
print(dir(sys))
