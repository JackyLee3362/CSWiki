nums = [1,3,5,2,4,6]

# 非原地排序
b = sorted(nums)

# 原地排序
nums.sort()

# 关键字排序
from operator import itemgetter, attrgetter
num_str = [[1,5,"hello"],[3,4,"world"],[2,6,"python"]]
num_str.sort(key=lambda i: i[0])
num_str.sort(key=itemgetter(0,1), reverse=True)   # 按关键字排序
# num_str.sort(key=attrgetter('age')) # 按属性名排序

