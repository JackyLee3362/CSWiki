'''上下文管理器类型（context-manager-types）
https://docs.python.org/zh-cn/3/library/stdtypes.html#context-manager-types
https://zhuanlan.zhihu.com/p/47579400
'''

class Sample:
    def __enter__(self):
        print('In __enter__')
        return '%s is good' % self
    def __exit__(self, exc_type, exc_value, traceback):
        print('In __exit__')
with Sample() as sample:
    print('sample', sample)


