#include <stdio.h>
#include <stdlib.h>

int main() {
    // �����ڴ沢��ʼ��Ϊ�㣬���� 5 ��������С���ڴ��
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // ʹ�÷�����ڴ�
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);  // Ӧ��ȫ����
    }
    
    // �ͷ��ڴ�
    free(arr);

    return 0;
}

