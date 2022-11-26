'''
https://docs.python.org/zh-cn/3.10/tutorial/controlflow.html#documentation-strings
'''

def f(name:str, age:int=18):
    '''Do something
    hello, I'm __doc__
    '''
    return name+str(age)
print(f.__annotations__) # 函数注解
print(f.__doc__) # 文档字符串