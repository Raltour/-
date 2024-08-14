#类的封装：某些属性可以公开访问，某些属性只能由类内部的成员（类内部的函数）访问（类的私有成员）
#定义方法：以__开头
class Person:
    def __init__(self,name,age):
        self.__name = name#私有属性
        self.__age = age

    def __display_info(self):#私有方法
        print(f"Name:{self.__name},Age:{self.__age}")

    def show_info(self):
        self.__display_info()

person = Person("Alice",30)
#print(person.__name)#报错AttibuteError
person.show_info()