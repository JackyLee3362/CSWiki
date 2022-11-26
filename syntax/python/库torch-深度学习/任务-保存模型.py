# %%
import torch
from torch import nn

# %% 训练模型
features = torch.tensor([[1.], [2.], [3.]])
labels = torch.tensor([[2.], [4.], [6.]])

model = nn.Sequential(nn.Linear(1, 1))
loss = nn.MSELoss()
optimizor = torch.optim.SGD(model.parameters(), lr=0.01)

for _ in range(20):
    for x, y in zip(features, labels):
        l = loss(model(x), y)

        optimizor.zero_grad()
        l.backward()
        optimizor.step()

    print(l.item())

# %% 保存模型
torch.save(model, 'network.pth')

# %% 加载模型
network = torch.load('network.pth')  # 提取整个网络
# %%
network.eval()
loss(network(x), y)


# %%
model.eval()
loss(model(x), y)

# %%
