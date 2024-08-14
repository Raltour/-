#字典:键值对(key-value pair)的无序集合
#key和value可以是任意数据结构
#通过key去访问value
score_dict = {
    "张三":638,
    "李四":695,
    "王五":667
}
print(score_dict["张三"])

#新增元素dict[key] = value
#获取元素个数len

#for遍历
for key in score_dict:
    print(key)
for value in score_dict.values():
    print(value)
for item in score_dict.items():
    print(item)
for key,value in score_dict.items():
    print(key,value)

#sorted对数据容器进行通用排序
#按照ASCII码进行排序
my_dict_new = sorted(score_dict,reverse = False)
print(my_dict_new)
#max、min取最大、最小者
max_people = max(score_dict)
print(max_people)