# 输出字符串
print("hello, python")

# 格式化输出浮点数
# https://www.runoob.com/python/att-string-format.html
# https://docs.python.org/zh-cn/3.10/tutorial/inputoutput.html

pi = 3.1415926
print("%.2f" % pi)
print("{:.2f}".format(pi))
print(f"{pi:.2f}")

# 对齐

print(f"左对齐  ：|{pi:<10.2f}|")
print(f"右对齐  ：|{pi:>10.2f}|")
print(f"中间对齐：|{pi:^10.2f}|")

# 对齐补零
print(f"右对齐  ：|{pi:k>10.2f}|")

n = 110
print(f"二进制：{n:b}")
print(f"十进制：{n:d}")
print(f"八进制：{n:o}")
print(f"十六进制：{n:x}")
print(f"十六进制：{n:#x}")
print(f"十六进制：{n:#X}")


