#include<stdio.h> 
void printArray(int *arr, int size) 
//void printArray(int arr[], int size) 
//定义了一个名为 printArray 的函数，接受一个整型指针 arr 和一个整数 size 作为参数。
// int arr[], 看起来是数组，其实是一个指针。 
// 我们用int *arr，是不是直接答案和结果，也是对的？这两个本质上是一个意思。对吧 
{
    for (int i = 0; i < size; i++) { // 遍历数组，从第一个元素到最后一个元素
        printf("%d ", arr[i]); // 打印当前元素的值
    }
    printf("\n"); // 打印换行符，表示输出结束
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // 声明并初始化一个整型数组
    int size = sizeof(arr) / sizeof(arr[0]); // 计算数组的大小，即元素个数
    printArray(arr, size); // 调用函数printArray，将数组arr和其大小作为参数传递给函数
    return 0; // 返回主函数结束标志，表示程序正常执行结束
}

