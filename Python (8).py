#if判读   elif若不成立再判断   else都不成立
#开发案例
from decimal import Decimal

money = input("请输入会员充值金额:")
money = int(money)

if money >= 1000:
    if money <= 2000:
        money = money * Decimal(1.15)
    elif money >2000:
        money = money * Decimal(1.2)
        if money >5000:
            money+=500

print(money)

#逻辑运算符:and  or  not#注意优先级()>not>and>or
if money >=1000 and money <=2000:
    hahaha
#if not (2<8 and 6>9)等价于if (2>=4 or 6<=9)