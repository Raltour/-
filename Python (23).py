#函数作为参数传递
def add(x,y):
    return x+y

def sub(x,y):
    return x-y

def calculator(x,y,operation):
    result=operation(x,y)
    return result

print(calculator(4,8,add))
print(calculator(10,3,sub))