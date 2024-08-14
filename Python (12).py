#让电脑自己猜数字
import random

a=1
b=100000000
right_number = random.randint(a,b)
count = 0
your_number = random.randint(a,b)
print("电脑猜数字：",your_number)

while your_number != right_number:
    if your_number > right_number:
        print("大了")
        count+=1
        b = your_number - 1
        your_number = random.randint(a,b)
        print("电脑猜数字：", your_number)
    else:
        print("小了")
        count += 1
        a = your_number + 1
        your_number = random.randint(a,b)
        print("电脑猜数字：", your_number)

count+=1
print(f"答对了,尝试了{count}次")