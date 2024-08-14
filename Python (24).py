#数据容器-列表-一个有序的、可变的元素集合
#列表中的元素可以是任意类型
#基本格式类似有序集合
to_do_list = ["早晨去跑步","刷短视频","上课"]
print(to_do_list[0])
print(to_do_list[1])
print(to_do_list[2])

#可以直接修改
to_do_list[0] = "继续睡觉"
print(to_do_list[0])

#可以逆向访问
print(to_do_list[-1])
print(to_do_list[-2])
print(to_do_list[-3])

#.点操作：用于访问对象的属性和方法
#inde查找某元素下标
print(to_do_list.index("刷短视频"))
#count统计某元素数量
print(to_do_list.count("刷短视频"))
#len数组中元素个数
print(len("Hello World"))
print(len(to_do_list))
#inserd为列表添加元素：插入到哪里就写几
to_do_list.insert(1,"吃早饭")
print(to_do_list)
#append追加元素
to_do_list.append("玩原神op")
to_do_list.append("玩原神")
to_do_list.append("玩原神")
to_do_list.append("玩原神op")
print(to_do_list)
#extend合并列表
list_1 = ["聊天"]
to_do_list.extend(list_1)
print(to_do_list)
#remove删除指定元素（匹配到的第一个元素）
to_do_list.remove("玩原神op")
print(to_do_list)
#pop删除指定下标的元素
to_do_list.pop(-1)
print(to_do_list)
#sort列表排序
my_list = [1,8,9,100,6,67,2]
my_list.sort()
print(my_list)

#加运算符+可以在多种数据类型之间操作
#字符串+字符串；数组+数组
list_2 = ["睡觉"]
list_3 = list_1 + list_2
print(list_3)

#访问列表中的列表中的元素
my_list=[[1,2,3],[4,5,6],[7,8]]
print(my_list[-2][0])

#列表与循环
print(to_do_list)
index = 0
while index < len(to_do_list):
    print(to_do_list[index])
    index += 1

index = 0
for index in range(0,8):
    print(to_do_list[index])