//
// Created by Tian on 2020/12/9.
//

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "ISBN must be the same" << std::endl;
        return -1;
    }
}