//指针的递增与递减
#include <stdio.h>
int main()
{
    //指针默认定位到数组的第一个元素中
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("Initial value: %d\n", *ptr); //输出当前指针指向的值
    ptr=ptr+1;//指向数组的下一个元素
    printf("After increment: %d\n", *ptr); //输出递增后的指针

    return 0;
}

