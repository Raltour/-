//计算1-10000之间3的倍数之和
#include<stdio.h>
int main(void)
{
    int sum = 0;
    int i = 0;

    while(i <= 10000)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }

    printf("%d",sum);

    return 0;
}