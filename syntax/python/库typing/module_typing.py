import typing

# 一般类型
s: str = "typing is str"
n: int = 1
f: float = 3.14
d: typing.Any = "typing is any"
l_n: list[int] = [1,2,3]

# 函数返回类型
def f() -> None:
  pass

# 类型重命名
List = list
l_s: List[str] = ["s", "st", "str"]

# overload，可以看作是一种函数的申明
from typing import overload

@overload
def f() -> None: ...

def f():
  print("f")
f()