#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[50];

    strcpy(str2, str1);

    printf("ԭ����: %s\n", str1);
    printf("���ƺ������: %s\n", str2);

    return 0;
}

