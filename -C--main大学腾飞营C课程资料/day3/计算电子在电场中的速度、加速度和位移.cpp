#include <stdio.h>

#define ELECTRON_MASS 9.10938356e-31  // kg

void calculateElectronMotion(double charge, double fieldStrength, int time) {
    double acceleration = (charge * fieldStrength) / ELECTRON_MASS;
    double velocity = acceleration * time;
    double displacement = 0.5 * acceleration * time * time;

    printf("ʱ��: %d ��\n", time);
    printf("�ٶ�: %.2e m/s\n", velocity);
    printf("���ٶ�: %.2e m/s^2\n", acceleration);
    printf("λ��: %.2e m\n", displacement);
}

int main() {
    double charge, fieldStrength;
    int time;

    printf("��������ӵĵ��� (C): ");
    scanf("%lf", &charge);
    printf("������糡ǿ�� (N/C): ");
    scanf("%lf", &fieldStrength);
    printf("������ʱ�� (��): ");
    scanf("%d", &time);

    calculateElectronMotion(charge, fieldStrength, time);

    return 0;
}

