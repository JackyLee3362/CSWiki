"""
只涉及列表，数组请使用numpy
https://docs.python.org/zh-cn/3.10/tutorial/datastructures.html#more-on-lists
"""

# 列表

# 列表赋值

nums = list([])
nums = [1, 3, 5, 2, 4, 6]

# 列表长度

len(nums)
nums.__len__()

# 列表求和

sum(nums)

# 初始化一维列表

[0] * 4  # [0, 0, 0, 0]
list(range(4))  # [0, 1, 2, 3, 4]
[_ for _ in range(4)]  # [0, 1, 2, 3, 4]

# 初始化二维列表

[[0, 0] for i in range(4)]  # [[0, 0], [0, 0], [0, 0], [0, 0]]
print([[0, i] for i in range(4)])  # [[0, 0], [0, 1], [0, 2], [0, 3]]

# 遍历列表

## 元素遍历
for item in nums:
    pass

## 指针遍历
for idx in range(len(nums)):
    pass

## 指针+元素遍历
for idx, item in enumerate(nums):
    pass

# 操作


nums = [1,2,3]

nums.append(4) # [1,2,3,4]
nums.extend([5,6]) # [1, 2, 3, 4, 5, 6]


print(nums)

# 切片

numbers = [1, 2, 3, 4, 4, 5]
first, second, *other, last= numbers
print(first)
print(other)

# 

letters = list("abc")

letters.append("d")  # 尾部插入 ['a', 'b', 'c', 'd']
letters.insert(0,"-")  # 特定位置插入 ['a', 'b', 'c', 'd']
letters.pop() # 默认是最后一位，也可以指定位置
letters.extend(['d', 'e', 'f'])
letters.remove("b")  # 默认移除第一次出现的b
if "d" in letters:  # 如果不加条件判断，找不到时会抛出异常
    letters.index("d") 
