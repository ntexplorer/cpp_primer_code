//
// Created by Tian on 2020/12/9.
//

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currentItem, tempItem;
    if (std::cin >> currentItem) {
        int count = 1;
        while (std::cin >> tempItem) {
            if (tempItem.isbn() == currentItem.isbn()) {
                ++count;
            } else {
                std::cout << currentItem << " occurs " << count << " times." << std::endl;
                currentItem = tempItem;
                count = 1;
            }
        }
        std::cout << currentItem << " occurs " << count << " times." << std::endl;
    }
    return 0;
}