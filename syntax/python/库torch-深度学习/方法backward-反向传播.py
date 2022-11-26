import torch

# 实验1
x = torch.tensor([1, 2, 3], dtype=torch.float32, requires_grad=True)
print(x)

y = x*x+1
print('y是：', y)
print('y的和是：', y.sum())
y.sum().backward()
print('x的梯度向量：', x.grad)
print('y的反向传播函数位置：', y.grad_fn)


# 实验2
x = torch.tensor([1, 2, 3], dtype=torch.float32, requires_grad=True)

for epoch in range(10):
    y = x*x+1
    y.sum().backward()
    print(f'epoch {epoch}: x grad is {x.grad}')
    with torch.no_grad():
        x -= 0.1 * x.grad
        x.grad.zero_()
