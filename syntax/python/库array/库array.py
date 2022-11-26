from array import array
numbers = array("i", [1, 2, 3]) # i 表示array是带符号整型
# numbers[0] = 1.0 # TypeError
numbers[0] = 1
print(numbers)