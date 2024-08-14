//判断数的正负//还有点BUG没有解决
#include<stdio.h>
int main ()
{
    double num;
    printf("请输入一个数字：\n");
    scanf("%lf",&num);

    if (num > 0)
    {
        printf("正数");
    }
        else if (num = 0)
        {
            printf("零");
        }
        else
        {
            printf("负数");
        }
    }
    
    return 0;
}