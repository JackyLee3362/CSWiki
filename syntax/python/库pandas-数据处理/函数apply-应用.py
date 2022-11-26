import pandas as pd

s = [
    [1, 'A'],
    [2, 'B'],
    [3, 'A']
]

df = pd.DataFrame(s, columns=['num', 'alpha'])

d = {'A': 15, 'B': 27}

print(df)

df['alpha'] = df['alpha'].apply(lambda x: d[x])

print(df)
