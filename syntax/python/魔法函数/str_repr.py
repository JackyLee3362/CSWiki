class People(object): 

    def __str__(self) -> str:
        return f"__str__()"
    def __repr__(self) -> str:
        return f"__repr__()"

people = People()
print(people) # print会调用__str__()函数
print(str(people))
print(repr(people))