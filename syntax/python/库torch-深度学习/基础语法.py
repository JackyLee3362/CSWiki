# %% 导入包
import torch
# %% arange函数
x = torch.arange(12)
x.shape
# %% reshape函数
a = torch.arange(3).reshape((3, 1))
b = torch.arange(4).reshape((2, 2))
a, b
# %% 可计算梯度的tensor
x = torch.arange(4, dtype=float, requires_grad=True)

# %% 基本计算
y = 2 * torch.dot(x,x)
# %%
