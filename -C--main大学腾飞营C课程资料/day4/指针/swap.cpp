#include <stdio.h>

// 函数定义：交换两个整数变量的值
void swap(int *a, int *b) {
    int temp = *a;  // 声明一个临时变量temp，用于存储a指针所指向的整数值
    *a = *b;        // 将b指针所指向的整数值赋给a指针所指向的位置
    *b = temp;      // 将临时变量temp中存储的整数值赋给b指针所指向的位置
}

// 主函数
int main() {
    int x = 5, y = 10;  // 声明整数变量x和y，并初始化分别为5和10
    
    // 打印交换前的值
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    // 调用swap函数，传递x和y的地址作为参数，交换它们的值
    swap(&x, &y);
    
    // 打印交换后的值
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;  // 返回主函数的结束值，表示程序正常执行结束
}

