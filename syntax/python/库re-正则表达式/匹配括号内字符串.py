# 匹配括号内字符
import re

str = 'East China Normal University'
print(re.match('East', str).span())  # 在起始位置匹配
print(re.match('China', str))        # 不在起始位置匹配

matchObj = re.match(r'(.*) China (.*?) .*', str, re.M|re.I)
if matchObj:
    print(matchObj.group())
    print(matchObj.group(1))
    print(matchObj.group(2))

