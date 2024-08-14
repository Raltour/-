#类的魔术方法：可以在类中自定义行为
class Vector:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def __add__(self,other):
        return Vector(self.x + other.x,self.y + other.y)

    def __eq__(self,other):
        return self.x == other.x and self.y == other.y

    def __call__(self):
        print(f"Vector({self.x},{self.y})")

    def __len__(self):
        return abs(self.x)+abs(self.y)

    def __getitem__(self,index):
        return (self.x,self.y)[index]

    def __setitem__(self,index,value):
        if index == 0:
            self.x = value
        elif index == 1:
            self.y = index

v1 = Vector(2,3)
v2 = Vector(1,1)
v3 = v1 + v2
print(v3.x,v3.y)
print(v1 == v2)
v1()
print(len(v1))
print(v1[0])
v1[0] = 10
print(v1.x)