#include <stdio.h>

int main() {
    double var1 = 10.0d;
    double var2 = 20.0d;
    
    double *ptr1 = &var1; // 指向 var1 的指针
    double *ptr2 = &var2; // 指向 var2 的指针

    printf("Address of var1: %p, Value: %d\n", ptr1, *ptr1);
    printf("Address of var2: %p, Value: %d\n", ptr2, *ptr2);

    return 0;
}
