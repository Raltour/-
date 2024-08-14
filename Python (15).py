#生成九九乘法表
for i in range(1,10):
    for j in range(1,i+1):
        print(f"{i}*{j}={i*j}",end="\t")#制表符
    print(end="\n")



#生成反向九九乘法表
for i in range(1,10,1):
    for j in range(i,10,1):
        print(f"{10-i}*{10-j}={(10-i)*(10-j)}",end="\t")
    print(end="\n")
