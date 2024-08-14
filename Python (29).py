#异常捕获bug
#try:可能出现异常的代码
#except:出现异常时要要执行的代码
#捕获bug后程序仍可继续运行并输出错误类型
#还有else和finally
#异常还有传递性
def divide(a,b):
    return a/b

def divide_twice(a,b):
    result = divide(a,b)
    result = divide(result,b)
    return

def calculate(a,b,operation):
    try:
        result = operation(a,b)
    except Exception as e:
        print(f"不是？哥们？出错了：{e}")
        return
    return result

calculate(10,0,divide)
calculate(10,0,divide_twice)