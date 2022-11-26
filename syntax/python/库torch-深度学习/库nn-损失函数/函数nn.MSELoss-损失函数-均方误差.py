import torch
from torch import nn

y_hat = torch.tensor([[1, 2, 3]], dtype=float)
y_true = torch.tensor([[3, 2, 4]], dtype=float)

# 最普通的
loss = nn.MSELoss(reduction='mean')
print(loss(y_hat, y_true))

# 不缩减维度
loss = nn.MSELoss(reduction='none')
print(loss(y_hat, y_true))

# 不对
loss = nn.MSELoss(reduction='sum')
print(loss(y_hat, y_true))

# https://blog.csdn.net/hao5335156/article/details/81029791
