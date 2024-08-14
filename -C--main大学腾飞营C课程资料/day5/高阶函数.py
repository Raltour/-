# -*- coding: utf-8 -*-
"""
Created on Mon Jul  8 15:13:58 2024

@author: wrm
"""

"""
Python里面可以调用abs这种自定的函数
"""

a=abs(-10)
print ("我们直接使用取绝对值函数：",a)
#print (a)

f=abs
print ("我们把abs函数赋值赋给了f，试一下f(-10)能不能跑通:",f(-10))
#print (f(-10))


def add_10(x):
    return x+10

def senior(a,b,f):
    return f(a)*f(b)

print (senior(10,100,add_10))

"""
你看懂这个senior函数是在干啥了吗？
"""

"""
定义一个“油炸函数”
定义一个”水煮函数“
比如说我们再定义一个做面条函数
鸡蛋->油炸鸡蛋
叉烧->炸好的叉烧
面->煮好的面

把煮好的面和炸好的鸡蛋/叉烧放到”做面条“函数里，是不是一个很轻易就能理解的逻辑？
"""    