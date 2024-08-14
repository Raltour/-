#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("方程有两个实数根: %.2f 和 %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("方程有一个实数根: %.2f\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("方程有两个虚数根: %.2f + %.2fi 和 %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    printf("请输入方程的系数 a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    solveQuadraticEquation(a, b, c);

    return 0;
}

