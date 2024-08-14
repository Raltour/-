#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8

void calculateFreeFall(double height) {
    double time = sqrt(2 * height / GRAVITY);
    double finalVelocity = GRAVITY * time;

    printf("物体落地所需的时间: %.2f 秒\n", time);
    printf("物体的最终速度: %.2f m/s\n", finalVelocity);
}

int main() {
    double height;
    printf("请输入物体的高度 (米): ");
    scanf("%lf", &height);

    calculateFreeFall(height);

    return 0;
}

