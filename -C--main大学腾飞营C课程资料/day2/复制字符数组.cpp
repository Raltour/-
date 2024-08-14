#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[50];

    strcpy(str2, str1);

    printf("原数组: %s\n", str1);
    printf("复制后的数组: %s\n", str2);

    return 0;
}

