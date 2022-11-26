import pandas as pd

s = [
    [1, 'A'],
    [2, 'B'],
    [3, 'A']
]

df = pd.DataFrame(s, columns=['num', 'alpha'])


# 形状
print('df的行数是{}，列数是{}'.format(len(df.index), len(df.columns)))
print(df.shape)
