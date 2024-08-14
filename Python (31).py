#类的构造方法,使用__init__函数
class Animal:
    def __init__(self, name, species,sound):
        self.name = None
        self.species = None
        self.sound = None
        self.make_sound()

    def make_sound(self):
        sound = f"{self.name}发出{self.sound}的声音"
        return sound

    def describe(self):
        self.make_sound()
        return(f"名字{self.name},种类{self.species}")

#对象被创建时，类的构造方法自动执行
dog = Animal(name = "旺财",species = "柯基",sound = "汪汪汪")