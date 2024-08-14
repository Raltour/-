#include <stdio.h>

// 定义一个整数除法函数，接受两个整数参数a和b，以及一个指向结果的指针result
int divide(int a, int b, int *result) {
    // 检查除数是否为0，若为0则返回错误码-1表示除数为0的错误
    if (b == 0) {
        return -1; // 返回错误码表示除数为0的错误
    }
    
    // 计算除法结果，并将结果通过指针result返回
    *result = a / b;
    
    // 成功返回0
    return 0; // 成功返回0
}

// 主函数
int main() {
    int a = 10, b = 0, result;
    int ret; // 用于存储函数返回值的变量

    // 调用divide函数进行除法计算，将结果存储在result变量中
    // 同时获取函数返回值，存储在ret变量中
    ret = divide(a, b, &result);

    // 检查divide函数的返回值，判断是否发生了错误
    if (ret != 0) {
        printf("Error occurred: division by zero\n");
        // 可以进行相应的错误处理逻辑，例如记录日志、退出程序等
    } else {
        // 如果没有发生错误，则打印计算得到的结果
        printf("Result: %d\n", result);
    }

    // 返回主函数的结束标志，表示程序正常执行结束
    return 0;
}

