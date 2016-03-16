//
// Created by Aditya on 16-Mar-16.
//

#include <iostream>
#include "../header/Multiply.h"

Multiply::Multiply(int n) {
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sumMultiply += i;
    }
}

void Multiply::displaySum() {
    std::cout << sumMultiply << std::endl;
}
