//数组与指针
#include<stdio.h>
int main(void)
{
    long long a[5];
    //数组指针的位置与数组中第一个元素的位置是一样的
    printf("%p\n",&a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[4]);

    return 0;
}