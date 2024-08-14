#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8

void calculateFreeFall(double height) {
    double time = sqrt(2 * height / GRAVITY);
    double finalVelocity = GRAVITY * time;

    printf("������������ʱ��: %.2f ��\n", time);
    printf("����������ٶ�: %.2f m/s\n", finalVelocity);
}

int main() {
    double height;
    printf("����������ĸ߶� (��): ");
    scanf("%lf", &height);

    calculateFreeFall(height);

    return 0;
}

