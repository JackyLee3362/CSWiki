import time

# str -> 生成元组
print(time.strptime("2022-10-23 18:00:23","%Y-%m-%d %H:%M:%S")) 

# 时间元组-> str
print(time.strftime("%Y-%m-%d %H:%M:%S",time.localtime())) # 生成datetime

# 时间元组 -> 时间戳
print(time.mktime(time.localtime()))

# 时间戳 -> 时间元组 -> str
timeArray = time.localtime(time.time())
print(time.strftime("%Y-%m-%d %H:%M:%S", timeArray))