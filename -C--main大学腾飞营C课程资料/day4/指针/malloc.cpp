#include <stdio.h>
#include <stdlib.h>

int main() {
    // ����һ��������С���ڴ��
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // ʹ�÷�����ڴ棬����������ط����ǾͲ����ٶ����Ǹ�int�˶԰ɣ� 
    *ptr = 10;
    printf("Value: %d\n", *ptr);
    
    // �ͷ��ڴ�
    free(ptr);

    return 0;
}

