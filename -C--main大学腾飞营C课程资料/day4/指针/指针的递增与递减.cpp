#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("Initial value: %d\n", *ptr); // 输出当前指针指向的值
    //ptr=ptr+1; // 指针递增，指向数组的下一个元素
    ptr=ptr+1;
    printf("After increment: %d\n", *ptr); // 输出递增后指针指向的值

    return 0;
}

