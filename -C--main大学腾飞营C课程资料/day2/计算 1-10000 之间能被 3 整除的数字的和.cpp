#include <iostream>

int main() {
    int total_sum = 0;
    for (int i = 1; i <= 10000; i++) {
        if (i % 3 == 0) {
            total_sum += i;
        }
    }
    std::cout << "1-10000之间能被3整除的数字的和是：" << total_sum << std::endl;
    return 0;
}

