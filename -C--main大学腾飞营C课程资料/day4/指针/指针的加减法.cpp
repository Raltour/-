#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // ʹ��ָ��ӷ��ͼ�����������Ԫ��
    printf("Element at position 2: %d\n", *(ptr + 2)); // ������������Ԫ�ص�ֵ
    printf("Element at position 4: %d\n", *(ptr + 4)); // �����������Ԫ�ص�ֵ

    return 0;
}

