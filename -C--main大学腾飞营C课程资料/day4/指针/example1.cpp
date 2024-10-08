#include <stdio.h>

int main() {
    int num = 10; // 定义一个整型变量 num，并赋值为 10

    int *ptr; // 定义一个整型指针 ptr

    ptr = &num; // 使用取地址运算符 & 获取 num 的地址，并将地址赋值给 ptr

    printf("Address of num: %p\n", ptr); // 打印 num 的地址
    printf("Value of num: %d\n", *ptr); // 打印 ptr 指向的值，即 num 的值

    return 0;
}

