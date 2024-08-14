#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr1 = arr;
    int *ptr2 = arr + 2;

    if (ptr1 == ptr2) {
        printf("Pointers point to the same location.\n");
    } else {
        printf("Pointers do not point to the same location.\n");
    }

    return 0;
}

