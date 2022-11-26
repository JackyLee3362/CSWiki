class People(object):
  def __new__(cls, *args,**kwargs):
    instance = super().__new__(cls)
    return instance 

  def __init__(self, name, age) -> None:
    self.name = name
    self.age = age
    self.family = ["father", "mother"]
    self.score = [90, 88, 95]