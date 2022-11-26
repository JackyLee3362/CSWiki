import numpy as np

a = [1, 2, 3]

'''
def array(a, dtype=None, order=None):
    return array(a, dtype, copy=True, order=order)
'''
b = np.array(a)  # 默认拷贝原始数据


'''
def asarray(a, dtype=None, order=None):
    return array(a, dtype, copy=False, order=order)

'''
c = np.asarray(a)  # 默认不拷贝原始数据
