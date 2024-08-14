message1="""用户 %s 您好，积分剩余 %d 分，
将在 %s 到期"""%('kk',2600,'123')
print(message1)
message2="""用户 %s 您好，积分剩余 %d 分，
将在 %s 到期"""
print(message2)

number=9999.9998
message3 = "一刀%18.2f伤害，快来试试吧" % number
print(message3)

message4 = f"""用户{number}您好，剩余{input("请输入剩余积分")}"""
print(message4)
#一种更优雅的写法