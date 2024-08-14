#案例：猜数字强化版
import random

right_number = random.randint(1,100)
my_number = int(input("请输入你猜的数字："))

while my_number != right_number:
    if my_number > right_number:
        print("大了")
        my_number = int(input("请输入你猜的数字："))
    else:
        print("小了")
        my_number = int(input("请输入你猜的数字："))

print("答对了")