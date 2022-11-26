import re
str = '华东师范大学'
print(re.search('华东', str ))
print(re.search('华东', str ).span())