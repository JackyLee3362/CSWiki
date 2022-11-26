# https://docs.python.org/zh-cn/3.10/tutorial/modules.html#executing-modules-as-scripts
# 以脚本形式执行模块
# >>> python fibo.py <arguments>

import sys
def f(name, age):
    print(name, age)
if __name__ == '__main__':
    # f(sys.argv[1],int(sys.argv[2]))
    # python .\python\basic_module\module_os.py jacky 25
    ...