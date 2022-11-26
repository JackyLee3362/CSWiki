import torch
from torch import nn

x = torch.tensor([[1, 2], [3, 4], [5, 6]])


model = nn.Sequential(nn.Linear(x.shape[-1], 1, bias=False))
print('无偏差时：\n', list(model.parameters()))


model2 = nn.Sequential(nn.Linear(x.shape[-1], 1, bias=True))
print('有偏差时：\n', list(model2.parameters()))
