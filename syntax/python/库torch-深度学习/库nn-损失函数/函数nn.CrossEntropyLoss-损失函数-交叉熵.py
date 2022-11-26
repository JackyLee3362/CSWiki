import torch
from torch import nn

entroy = nn.CrossEntropyLoss()
#
y_hat = torch.tensor([
    [0.2, 0.3, 0.5],
    [0.2, 0.3, 0.5],
    [0.2, 0.3, 0.5]
])

y_true = torch.tensor([0, 1, 2])
print(entroy(y_hat, y_true))

# https://zhuanlan.zhihu.com/p/415829154

y_hat = torch.tensor([[1, 2, 3]])
y_true = torch.tensor([[3, 2, 4]])

loss = nn.CrossEntropyLoss(reduction='none')
print(loss(y_hat, y_true))

loss = nn.CrossEntropyLoss(reduction='mean')
print(loss(y_hat, y_true))

'''
交叉熵损失中，y_hat可以是任意类型，但是y_true必须是long类型


'''
