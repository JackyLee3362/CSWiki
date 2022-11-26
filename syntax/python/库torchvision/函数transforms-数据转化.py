from torchvision import transforms
from PIL import Image

image = Image.open('pic/Lena.jpeg')

# 实验1
transform1 = transforms.Compose([
    transforms.CenterCrop(2),
    transforms.ToTensor(),  # element = [0.0, 1.0]
])

x1 = transform1(image)
print(x1)

# 实验2
transform2 = transforms.Compose([
    transforms.CenterCrop(2),
    transforms.PILToTensor(),  # element = [0, 255]
])

x2 = transform2(image)
print(x2)

# 结论

# 用实验1的代码
