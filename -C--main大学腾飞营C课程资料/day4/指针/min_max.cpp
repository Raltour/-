#include <stdio.h>

// 函数定义：找出整数数组中的最小值和最大值
void minmax(int a[], int len, int *max, int *min) {
    int i;
    *min = a[0]; // 初始化最小值为数组第一个元素
    *max = a[0]; // 初始化最大值为数组第一个元素
    
    // 遍历数组，更新最小值和最大值
    for (i = 0; i < len; i++) {
        if (a[i] < *min) { // 如果当前元素比当前最小值还小
            *min = a[i];  // 更新最小值
        }
        if (a[i] > *max) { // 如果当前元素比当前最大值还大
            *max = a[i];  // 更新最大值
        }
    }
}

int main(void) {
    int a[] = {1, 2, 5, 4, 3}; // 定义整数数组a
    int min, max; // 定义变量min和max，用于存储最小值和最大值
    
    // 调用minmax函数，计算数组a的最小值和最大值，并通过指针参数返回
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    
    // 打印计算得到的最小值和最大值
    printf("min = %d, max = %d\n", min, max);
    
    return 0; // 返回主函数结束标志，表示程序正常执行结束
}

