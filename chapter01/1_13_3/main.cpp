//
// Created by Tian on 2020/12/8.
//

#include <iostream>

int main() {
    int v1, v2;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The integers between " << v1 << " and " << v2 << " are: " << std::endl;
    for (int i = v1; i <= v2; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
