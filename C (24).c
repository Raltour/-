/*指针作为函数参数：
编写一个函数，接受一个整型数组和数组大小作为参数，
使用指针遍历数组并打印每个元素的值。*/
#include<stdio.h>
void fun (int arr[],int len)
{
    int *ptr = arr;
    int i = 0;
    while(i < len)
    {
        printf("The value in position %d is %d\n",ptr + i,*(ptr + i));
        i = i + 1;
    }
}

int main(void)
{
    int arr[] = {1,76,2,342,98,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    fun(arr,len);

    return 0;
}