//函数的递归
#include<stdio.h>
int fibonaci(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibonaci(n-1) + fibonaci(n-2);
    }
}
int main()
{
    int n=20;
    int result = fibonaci(n);
    printf("The result is:%d,",result);
    
    return 0;
}