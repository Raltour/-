#集合用于储存不重复的元素集合，集合是无序的，因此无法通过索引访问元素，可以修改元素
set = {"apple","banana","cherry"}

#add追加元素
set.add("orange")
set.add("orange")
set.add("orange")
set.add("orange")
print(set)
#输出的结果是无序的，相同元素只显示一个

#remove删除指定元素
#pop删除随机元素
#clear清空集合

#集合的运算：并集、交集、差集
set1 = {1,2,3}
set2 = {3,4,5}
set3 = set1|set2#并集.union
print(set3)
set4 = set1&set2#交集.intersection
print(set4)
set5 = set1-set2#差集.diferrence
print(set5)

#len统计集合元素个数
#for遍历集合

#集合的应用场景：给数列去重（利用不重复性）