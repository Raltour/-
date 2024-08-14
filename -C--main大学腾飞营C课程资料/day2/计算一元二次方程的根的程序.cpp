#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "�����뷽�̵�ϵ�� a, b, c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "����������ʵ����: " << root1 << " �� " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "������һ��ʵ����: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "����������������: " << realPart << " + " << imaginaryPart << "i �� " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}

