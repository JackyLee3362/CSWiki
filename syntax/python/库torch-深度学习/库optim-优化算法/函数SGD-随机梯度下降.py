import torch
import torch.utils.data
from torch import nn

x = torch.tensor([[1, 2], [3, 4], [5, 6]], dtype=torch.float32)
w = torch.tensor([2, 3], dtype=torch.float32).reshape(-1, 1)
y = torch.mm(x, w)
print(y)
data = torch.utils.data.TensorDataset(x, y)

# 仅仅是传入feature的形状
model = nn.Sequential(nn.Linear(x.shape[-1], 1, bias=False))
print(list(model.parameters()))

loss = nn.MSELoss()  # 创建类

trainer = torch.optim.SGD(model.parameters(), lr=0.01)

# X 是输入，y是真实标签
for xi, yi in data:
    yi_hat = model(xi)  # 生成预测值
    l = loss(yi_hat, yi)
