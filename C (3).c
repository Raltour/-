//循环:计算1到10000之和
#include<stdio.h>
int main()
{
    int sum = 0;

    for(int i= 1;i <= 10000;i=i+1)
    {
        sum = sum + i;
    }

    printf("The result is:%d\n",sum);

    return 0;
}