#include <stdio.h>

#define ELECTRON_MASS 9.10938356e-31  // kg

void calculateElectronMotion(double charge, double fieldStrength, int time) {
    double acceleration = (charge * fieldStrength) / ELECTRON_MASS;
    double velocity = acceleration * time;
    double displacement = 0.5 * acceleration * time * time;

    printf("时间: %d 秒\n", time);
    printf("速度: %.2e m/s\n", velocity);
    printf("加速度: %.2e m/s^2\n", acceleration);
    printf("位移: %.2e m\n", displacement);
}

int main() {
    double charge, fieldStrength;
    int time;

    printf("请输入电子的电量 (C): ");
    scanf("%lf", &charge);
    printf("请输入电场强度 (N/C): ");
    scanf("%lf", &fieldStrength);
    printf("请输入时间 (秒): ");
    scanf("%d", &time);

    calculateElectronMotion(charge, fieldStrength, time);

    return 0;
}

