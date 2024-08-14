//数组
//定义数组时就要规定长度,从C99开始支持可变长度的数组
//多维数组：矩阵、张量
//遍历数组
#include<stdio.h>
int main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < size;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}