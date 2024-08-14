//指针:*p是指针变量，p是普通变量
#include<stdio.h>
int main(void)
{
    int num = 10;
    //定义一个整型指针ptr
    int *ptr;
    //使用取地址运算符&获取num的地址，并将地址赋值给ptr
    //地址是一个十六进制的数字，对应内存中的地址
    ptr = &num;
    //打印num的地址
    printf("Address of num:%p\n",ptr);
    //打印ptr指向的值，即num的值
    printf("Value of num:%d\n",*ptr);

    return 0;
}