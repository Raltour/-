#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // 使用指针加法和减法访问数组元素
    printf("Element at position 2: %d\n", *(ptr + 2)); // 输出数组第三个元素的值
    printf("Element at position 4: %d\n", *(ptr + 4)); // 输出数组第五个元素的值

    return 0;
}

