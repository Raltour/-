#include <iostream>

bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int year;
    std::cout << "������һ�����: ";
    std::cin >> year;
    
    if (is_leap_year(year)) {
        std::cout << year << " ������" << std::endl;
    } else {
        std::cout << year << " ��������" << std::endl;
    }
    return 0;
}

