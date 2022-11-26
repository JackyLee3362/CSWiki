from typing import (Any)

class People(object):
  def __new__(cls, *args,**kwargs):
    instance = super().__new__(cls)
    return instance 

  def __init__(self, name, age) -> None:
    '''
    >>> people = People("jacky", 25)
    '''
    self.name = name
    self.age = age
    self.family = ["father", "mother"]
    self.score = [90, 88, 95]
  
  def walk(self) -> None:
    print("walking")
  
  def __len__(self) -> int:
    '''
    在len()函数内部，它自动调用该对象的__len__()方法
    >>> len(people)
    5
    '''
    return self.name.__len__()
  
  def __getitem__(self, index):
    '''
    >>> people[0]
    father
    >>>
    '''
    return self.family[index]

  def __contain__(self, x):
    '''
    >>> "father" in people
    True
    '''
    return x in self.family

  def __iter__(self):
    return self

  def __next__(self):
    if self.age > 30:
      raise StopIteration
    else:
      self.age += 1
      return self.age

  def __call__(self, *args: Any, **kwds: Any) -> Any:
    '''
    >>> args = ("hello", "world")
    >>> kwds = {"end":"\n"}
    >>> people(*args, **kwds)
    args ('hello', 'world')
    *args hello world
    kwds {'end': '\n'}
    **kwds
    '''
    print("args", args)
    print("*args", *args)
    print("kwds", kwds)
    print("**kwds", **kwds)

class Student(People):
  '''面向对象 继承性'''
  def __init__(self,age) -> None:
    self.age = age
  def walk(self):
    print("student walk")

if __name__ == "__main__":
  people = People("jacky", 25)
  args = ("hello", "world")
  kwds = {"end":"\n"}
  people(*args, **kwds)

  print(people.__iter__())
  for i in range(2):
    print(people.__next__())

  
  student = Student(18)
  student()
  student.walk()

  teacher = Teacher()
  print(teacher.age)
  teacher.walk()


    
  