#开发案例：会员充值系统
money = input("请输入会员充值金额:")
money = int(money)

if money > 1000:
    money_1 = money + money*0.15
    money_2 = money*1.15

print("充值后的金额为:",money_1,money_2)
#输入1500元，探讨精度问题
#若要避免误差，可以用Decimal类型的数值，
#可以精确表示任意精度的十进制数，避免二进制表示法带来的舍入误差。
#float计算速度快，适用于对精度要求不高的场景