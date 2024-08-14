#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverse(str);

    printf("反转后的字符串: %s\n", str);

    return 0;
}

