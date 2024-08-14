#include<stdio.h>
int main(void)
{
    int var1 = 10,var2 = 20;
    int *ptr1 = &var1,*ptr2 = &var2;

    printf("Address of var1:%p,Value:%d\n",ptr1,*ptr1);
    printf("Address of var2:%p,Value:%d\n",ptr2,*ptr2);
    /*两个地址的值相差为4,这是因为int类型占用4个字节，
    如果换为double类型，则相差为4，double占用4个字节，
    C语言默认储存在相邻的内存位置中，对内存有较严格的管理，
    C语言中堆栈的分配是“自顶而下的分配”，
    结合计算机组成原理、操作系统、数据结构与算法的高级课程*/

    return 0;
}