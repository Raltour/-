#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    printf("�������һ��������� (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("������ڶ���������� (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = calculateDistance(x1, y1, x2, y2);
    printf("����֮��ľ�����: %.2f\n", distance);

    return 0;
}

