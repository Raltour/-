# -*- coding: utf-8 -*-
"""
Created on Mon Jul  8 15:35:54 2024

@author: wrm
"""
"""
写好函数式编程，你就可以不写if else了！
"""
from functools import reduce

def square(x):
    return x*x

r=map(square,[i for i in range(10)])
"""
我们看一下这种情况下输出的结果
"""
print (list(r))

r2=map(square,[10*i for i in range(10)])
"""
我们看一下这种情况下输出的结果
"""
print (list(r2))

"""
作业题：用map方法把一个list里面的数字全部改成string格式
"""

"""
reduce是怎么回事儿？
reduce(f, [x1, x2, x3, x4]) = f(f(f(x1, x2), x3), x4)
"""

def multiply(x,y):
    return x*y

print (reduce(multiply,[1,2,3,4,5]))

"""
作业题：用列表生成式以及reduce方法返回1-99的和
"""