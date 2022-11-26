import torch

# 第一步，数据预处理

features = torch.tensor([[1, 2], [2, 3], [3, 4]], dtype=torch.float32)
labels = torch.tensor([[2], [4], [6]], dtype=torch.float32)  # y = 2*x + 1

w_true = torch.tensor([3, 4], dtype=torch.float32)
b_true = torch.tensor(data=5, dtype=torch.float32)

y = torch.matmul(features, w_true)
print(y)
