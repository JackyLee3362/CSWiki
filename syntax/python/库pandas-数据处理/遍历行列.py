import pandas as pd

s = [
    [1, 'A'],
    [2, 'B'],
    [3, 'A']
]

df = pd.DataFrame(s, columns=['num', 'alpha'])

# 遍历列
for column in df.iteritems():
    ...
# 遍历行1
for row in df.iterrows():
    ...
# 遍历行2
for row in df.itertuples():
    ...

