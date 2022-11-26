url = 'https://docs.python.org/zh-cn/3.10/tutorial/controlflow.html#arbitrary-argument-lists'

def get_args(*args):
    print(args)
def get_kwargs(**kwargs):
    print(kwargs)
get_args(1,2,3) # args返回元组,kwargs返回字典
get_kwargs(name='jacky', age=18)