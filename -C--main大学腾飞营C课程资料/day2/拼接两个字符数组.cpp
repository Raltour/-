#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = ", World!";

    strcat(str1, str2);

    printf("Æ´½ÓºóµÄ×Ö·û´®: %s\n", str1);

    return 0;
}

