#全局中变量在函数中只能被访问而不能修改
#除非声明global y才能在函数修改
y = 10

def fun ():
    global y
    y=20
    print(y)
    return

fun()
print(y)


#更建议用以下方法修改全局变量，用调用函数的方式改变变量的值
def fun_x(x):
   x = 20
   return x

x = fun(x)