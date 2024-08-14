#计算BMI的函数：演示函数的注释规范
def calculate_bmi(weight,height):
    """
    根据输入的体重（千克）和身高（米）来计算BMI值

    :param weight: 体重
    :param height: 身高
    :return: 计算出的BMI值
    """

    if height <= 0:
        print("身高必须大于零")
        return

    if weight <= 0:
        print("体重必须大于零")
        return

    BMI=wight/(height**2)
    return BMI

calculate_bmi()
#鼠标悬浮在函数上面时，会显示出对应的注释