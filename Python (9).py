#案例：猜数字
import random

right_number = random.randint(1,100)
my_number = int(input("请输入你猜的数字："))

if my_number == right_number:
    print("恭喜你，猜对了")
else:
    print("很遗憾，你猜错了")