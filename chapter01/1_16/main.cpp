//
// Created by Tian on 2020/12/8.
//

#include <iostream>

int main() {
    int sum = 0, val;
    std::cout << "Please enter the numbers: " << sum << std::endl;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << sum << std::endl;
    return 0;
}
