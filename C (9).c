//定义一个函数实现两个数的相加
#include<stdio.h>
int add(int a,int b)
{
    int result = a+b;
    return result;//可以直接用return a + b;
}
int main()
{
    int x = 3,y = 7;
    int num;
    num = add(x,y);
    printf("%d",num);

    return 0;
}