#include <stdio.h>
#include <stdlib.h>

/*
������ǰ������ڴ��Ĵ�С���������ӻ�����ڴ��Ĵ�С��
�����Ҫ���Ӵ�С��realloc ���ܻ��ƶ��ڴ�鵽�µ�λ�á�
*/

int main() {
    // ��ʼ�����ڴ�
    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // ��ʼ���ڴ�
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1;
    }
    
    // �����ڴ���С
    arr = (int *)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    // �·�����ڴ�������δ��ʼ��
    for (int i = 3; i < 5; i++) {
        arr[i] = i + 1;
    }
    
    // ʹ�úʹ�ӡ�ڴ�
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // �ͷ��ڴ�
    free(arr);

    return 0;
}

