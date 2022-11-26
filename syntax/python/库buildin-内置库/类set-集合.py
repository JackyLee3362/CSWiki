numbers = [1, 1, 2, 3, 2, 4]
first = set(numbers)
print(first)


second = {1, 5}
print(first | second) # 并集
print(first & second) # 交集
print(first - second) # 差集
print(first ^ second) # 补集