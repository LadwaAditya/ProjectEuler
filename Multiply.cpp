//
// Created by Aditya on 16-Mar-16.
//

#include <iostream>
#include "Multiply.h"

Multiply::Multiply(int n) {
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
}

void Multiply::displaySum() {
    std::cout << sum << std::endl;
}
