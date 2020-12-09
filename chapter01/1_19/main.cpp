//
// Created by Tian on 2020/12/9.
//

#include <iostream>

int main() {
    int v1, v2;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "All the integers between " << v1 << " and " << v2 << " are:" << std::endl;
    if (v1 < v2) {
        for (int i = v1; i <= v2; ++i) {
            std::cout << i << std::endl;
        }
    } else if (v1 > v2) {
        for (int i = v2; i <= v1; ++i) {
            std::cout << i << std::endl;
        }
    } else {
        std::cout << v1 << std::endl;
    }
    return 0;
}
