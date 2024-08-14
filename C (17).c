//C语言中常用指针进行异常捕获
#include<stdio.h>

//定义一个整数除法函数
int divide(int a, int b, int *result)
{
    //检查除数是否为零
    if (b == 0)
    {
        return -1;//返回错误码表示除数为零的错误
    }
    
    *result = a / b;
    
    return 0;
}

int main()
{
    int a = 10, b = 0, result;
    int ret;//用于储存函数的返回值
    ret = divide(a, b, &result);

    if (ret != 0)
    {
        printf("Error occurred: division by zero\n");
    } 
    else
    {
        printf("Result: %d\n", result);
    }

    return 0;
}