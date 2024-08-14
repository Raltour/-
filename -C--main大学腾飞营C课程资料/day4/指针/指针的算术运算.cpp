#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // 指向数组arr的第一个元素的指针

    // 访问数组元素，使用指针的算术运算
    for (int i = 0; i < 5; i++) {
        printf("Value at position %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

