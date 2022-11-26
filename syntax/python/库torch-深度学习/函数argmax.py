import torch
a = torch.tensor(
    [
        [1, 5, 5, 2],
        [9, -6, 2, 8],
        [-3, 7, -9, 1]
    ])

b = torch.max(a, dim=0)
print(b)

b = torch.argmax(a, dim=0)  # 或写作 b = a.argmax(dim=0)
print(b)

b = torch.argmax(a, dim=1)
print(b)
