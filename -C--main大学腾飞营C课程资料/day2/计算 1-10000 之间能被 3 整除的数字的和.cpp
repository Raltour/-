#include <iostream>

int main() {
    int total_sum = 0;
    for (int i = 1; i <= 10000; i++) {
        if (i % 3 == 0) {
            total_sum += i;
        }
    }
    std::cout << "1-10000֮���ܱ�3���������ֵĺ��ǣ�" << total_sum << std::endl;
    return 0;
}

