import torch
# 举例
a = torch.tensor([1, 2, 6])
b = torch.tensor([3, 4, 5])
c = torch.max(a, b)

print(c)

# 此函数主要用于ReLu函数


def ReLu(X: torch.tensor) -> torch.tensor:
    a = torch.zeros_like(X)
    return torch.max(X, a)
