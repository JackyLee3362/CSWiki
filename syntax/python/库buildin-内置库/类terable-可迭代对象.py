dir = {x : x**2 for x in range(5)}
print(dir)
lis = [x for x in range(5)]  # 生成列表
print(lis)
tup = (x for x in range(5))  # ！注意：并不是生成元组
print(list(tup))
print(type(tup))
