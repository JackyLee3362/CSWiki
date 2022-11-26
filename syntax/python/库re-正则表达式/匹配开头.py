import re
str = 'East China Normal University'
print(re.match('East', str))
print(re.match('East', str).span())