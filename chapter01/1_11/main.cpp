//
// Created by Tian on 2020/12/8.
//

#include <iostream>

int main() {
    int v1, v2;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "All the integers between " << v1 << " and " << v2 << " are:" << std::endl;
    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;
}
