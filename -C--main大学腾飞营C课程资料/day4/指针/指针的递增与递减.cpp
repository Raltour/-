#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("Initial value: %d\n", *ptr); // �����ǰָ��ָ���ֵ
    //ptr=ptr+1; // ָ�������ָ���������һ��Ԫ��
    ptr=ptr+1;
    printf("After increment: %d\n", *ptr); // ���������ָ��ָ���ֵ

    return 0;
}

