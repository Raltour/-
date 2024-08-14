#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "请输入方程的系数 a, b, c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "方程有两个实数根: " << root1 << " 和 " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "方程有一个实数根: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "方程有两个虚数根: " << realPart << " + " << imaginaryPart << "i 和 " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}

