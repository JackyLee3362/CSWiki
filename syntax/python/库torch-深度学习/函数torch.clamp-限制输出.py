import torch

x = torch.tensor([[1, 2], [3, 4], [5, 6]])
y = torch.clamp(x, 2, 4)
print(y)
