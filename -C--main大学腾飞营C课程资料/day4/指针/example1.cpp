#include <stdio.h>

int main() {
    int num = 10; // ����һ�����ͱ��� num������ֵΪ 10

    int *ptr; // ����һ������ָ�� ptr

    ptr = &num; // ʹ��ȡ��ַ����� & ��ȡ num �ĵ�ַ��������ַ��ֵ�� ptr

    printf("Address of num: %p\n", ptr); // ��ӡ num �ĵ�ַ
    printf("Value of num: %d\n", *ptr); // ��ӡ ptr ָ���ֵ���� num ��ֵ

    return 0;
}

