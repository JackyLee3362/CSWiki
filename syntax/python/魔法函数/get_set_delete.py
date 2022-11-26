# 描述符Str
# 该描述符的作用是为另外一个类的类属性进行服务,另外一个类就是描述符的对象
class Str:
    def __get__(self, instance, owner):
        print('Str调用')
        print(instance, owner)
    def __set__(self, instance, value):
        print('Str设置...')
        print(instance,value)
    def __delete__(self, instance):
        print('Str删除...')
        print(instance)
 
 
class People:
    name = Str()  # name 属性被代理,将这个类作用于另外一个类的属性来使用
 
    def __init__(self,name): #name被Str类代理
        self.name = name
 
p1 = People('long')
 
# 描述符Str的使用
p1.name
p1.name = 'sss'
del p1.name
 
print(p1.__dict__)
print(People.__dict__)
