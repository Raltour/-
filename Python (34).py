#类的单继承
class Phone():
    def __init__(self,brand,model,price):
        self.brand = brand
        self.model = model
        self.price = price

    def call(self,number):
        return f"Calling {number} from {self.model}"

    def __str__(self):
        return f"Brand:{self.brand},Model{self.model}"


#创建新的类时可以从已有的类中继承一些成员
class Huawei(Phone):
    def __init__(self,model,price,harmony_version):
        # 调用父类函数时加上前缀super
        super().__init__("Huawei",model,price)
        self.harmony_version = harmony_version

    def fingerprint(self):
        return f"指纹识别在{self.model}机型上可用"

    # 子类中重写同名称的方法时，会覆盖原来父类的方法
    def __str__(self):
        return f"HUAWEI华为"


huawei_p40 = Huawei("P40",4999,"1.0")
print(huawei_p40.call('15610159165'))

#类的私有成员无法被继承，但是可以通过类的公开方法访问私有成员