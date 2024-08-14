/*演示如何声明一个指针参数的函数，
在主函数中调用该函数，并且打印变量的地址，
以及函数中指针的值*/
#include<stdio.h>
void f(int *p)
/*void定义的函数是没有返回值的，
void f(int *p)是一个参数为“指向整型数据的指针int *p”的函数的定义*/
{
    printf("p=%p\n",p);//打印i的地址
    printf("*p=%d\n",*p);//打印i的值

    *p = 26;/*对地址所指向的变量重新赋值,
    虽没有直接修改i，却通过其地址间接地改变了i的值*/
}

void g(int k)
//以一个整数k作为变量的函数%d是十进制
{
    printf("k=%d\n",k);//用于再次打印i的值
}

int main(void)
{
    int i = 6;
    printf("&i=%p\n",&i);//输出的是i的地址，和函数没有关系

    f(&i);//调用f函数，打印i的地址
    g(i);

    return 0;
}