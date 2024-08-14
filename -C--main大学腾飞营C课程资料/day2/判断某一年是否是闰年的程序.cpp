#include <iostream>

bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int year;
    std::cout << "请输入一个年份: ";
    std::cin >> year;
    
    if (is_leap_year(year)) {
        std::cout << year << " 是闰年" << std::endl;
    } else {
        std::cout << year << " 不是闰年" << std::endl;
    }
    return 0;
}

