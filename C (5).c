//打印九九乘法表奥
#include<stdio.h>
int main(void)
{
    for(int i = 1;i<10;i=i+1)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d*%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }

    return 0;
}