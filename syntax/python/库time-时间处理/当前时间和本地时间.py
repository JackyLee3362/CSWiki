import time

t = time.time()  # 输出时间戳（从1970年开始） 1665201897.329048

t_tuple = time.localtime(time.time())  # 输入时间戳->生成时间元组

# 格式化时间
time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())
