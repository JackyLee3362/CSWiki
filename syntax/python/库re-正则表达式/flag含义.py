import re
print(f're.I: {re.I}, 忽略大小写')
str_reI = 'East China'
print(re.findall('east', str_reI))
print(re.findall('east', str_reI, re.I))

print(f're.M: {re.M}, 多行匹配')
str_reM = '''
east china
east asian
'''
print(re.findall('east', str_reM))
print(re.findall('east', str_reM, re.M))

print(f're.S: {re.S}, "."号可以匹配换行符')
str_reS = '''
east china normal university
'''
print(re.findall(r'east(.*?) university', str_reM))
print(re.findall(r'east(.*?) university', str_reM, re.S))