from timeit import timeit

code1 = """
def factor(x):
    if(x<=0):
        raise ValueError("can less than 0")
    return 10/x
try:
    factor(-1)
except ValueError as e:
    pass
"""
code2 = """
def factor(x):
    if(x<=0):
        return None
    return 10/x
xfactor =  factor(-1)
if xfactor == None:
    pass
"""

print("first code:", timeit(code1, number=10000))
print("second code:", timeit(code2, number=10000))  # 快多了