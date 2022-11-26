from functools import wraps 
'''
该装饰器主要是用来传参
'''

def aop(func):
  '''
  装饰器函数
  '''
  @wraps(func)
  def wrapper(*args, **kwargs):
    print("调用前")
    func(*args, **kwargs)
    print("调用后")
  return wrapper


class Aop(object):
  '''
  装饰器类
  '''
  def __init__(self, aop_test_str) -> None:
    self.aop_test_str = aop_test_str
  
  def __call__(self, func):
    @wraps(func)
    def wrapper(*args, **kwargs):
      print("调用前", self.aop_test_str)
      func(*args, **kwargs)
      print("调用后", self.aop_test_str)
    return wrapper

'''
装饰器应用
'''   

@aop
def f_deco():
  print("无参函数+装饰器")

@aop
def f_deco_args(a,b,c):
  print("有参函数+装饰器", a,b,c)

@Aop("Aop参数")
def f_class_deco_args(a,b,c):
  print("有参函数+有参装饰器", a,b,c)


# 常见装饰器
class People:
  def __init__(self, name):
    self.name = name
    self._age = 19
  @staticmethod
  def walk():
    print("people walk")
  @classmethod
  def stand(cls):
    print("People stand.")
  @property
  def age(self):
    return self._age
if __name__ == "__main__":
  f_deco()
  f_deco_args(1,2,3)
  f_class_deco_args(4,5,6)
  # @final 该类不允许被继承
  people = People("lijie")
  people.walk()
  People.stand()
  print(people.age)
