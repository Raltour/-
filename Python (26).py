#数据容器-字符串—不可修改-有顺序、下标的概念
#也有类似的点操作
my_str = "Alice"
print(my_str[2])

#在字符串中可以用replace进行替换,生成新的字符串
new_str_1 = my_str.replace("Alice","Joe Baiden")
print(new_str_1)
#可以利用replace消去字符
new_str_2 = my_str.replace("i","")
print(new_str_2)
new_str_3 = my_str.replace("l"," ")
print(new_str_3)

#split分割字符串
my_str = "Alice"
my_str_list = my_str.split("i")
print(my_str_list)
#直接将字符串转为列表
list = list(my_str)
print(list)

#strip字符串的规整
my_str = "       Hello,Alice          "
my_str_new = my_str.strip()
print(my_str_new)


#列表、字符串、元组本质上都是序列，有顺序和下标
#特点：内容连续、有序；可以使用下标索引；可迭代可循环；支持切片

#序列切片：：从序列中取出一个子序列，语法：序列[star:stop:step]
my_str = "Hello,Alice,my name is Trump"
print(my_str[6:8])
print(my_str[8:6:-1])
print(my_str[-1:6:-1])
print(my_str[::-1])