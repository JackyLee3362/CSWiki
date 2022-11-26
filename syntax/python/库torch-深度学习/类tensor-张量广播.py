# %%
import torch

x = torch.tensor(range(24), dtype=torch.float32).reshape((3, 2, 4))
y = torch.tensor(range(4), dtype=torch.float32).reshape((1, 4))
# %%
x, y
# %%
x.shape, y.shape
# %%
x+y
# %%

'''
条件
当一对张量满足下面的条件时，它们才是可以被“广播”的。

1、每个张量至少有一个维度。

2、迭代维度尺寸时，从尾部（也就是从后往前）开始，依次每个维度的尺寸必须满足以下之一：

相等。
其中一个张量的维度尺寸为1。
其中一个张量不存在这个维度。

'''
