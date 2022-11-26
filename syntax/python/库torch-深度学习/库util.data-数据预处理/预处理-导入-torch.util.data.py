import torch
import torch.utils.data as data

a = torch.tensor([[1, 2], [3, 4], [5, 6]])
a2 = torch.tensor([4, 5, 6])

# a = torch.tensor([1, 2, 3])
# data.Dataset()
b = data.TensorDataset(a, a2)
b = data.TensorDataset(a, a2.reshape(-1, 1))


c = data.DataLoader(b)

for i in c:
    print(i)
