#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    printf("请输入第一个点的坐标 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("请输入第二个点的坐标 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = calculateDistance(x1, y1, x2, y2);
    printf("两点之间的距离是: %.2f\n", distance);

    return 0;
}

