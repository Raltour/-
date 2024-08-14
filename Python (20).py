#函数多返回值
def calc_square(number):
    square=number**2
    return square

def calc_cube(number):
    cube=number**3
    return cube

def calculate_square_and_cube(number):
    square=calc_square(number)
    cube=calc_cube(number)
    return square,cube
    #返回多个值时返回的是一个元组

print(calculate_square_and_cube(8))