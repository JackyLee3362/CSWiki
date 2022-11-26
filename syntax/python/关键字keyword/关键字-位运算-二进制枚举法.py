nums = [5,6,7]

for i in range(1, 1 << len(nums)):
    b = [x for j, x in enumerate(nums) if i >> j & 1]
    print(b)