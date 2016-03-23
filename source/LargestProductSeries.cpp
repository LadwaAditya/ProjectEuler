//
// Created by Aditya on 23-Mar-16.
//

#include <iostream>
#include "../header/LargestProductSeries.h"

LargestProductSeries::LargestProductSeries() {

    for (int i = 0; i <= 999 - 4; i++) {
        long temp = num[i] * num[i + 1] * num[i + 2] * num[i + 3];
        if (product < temp)
            product = temp;
    }
}

void LargestProductSeries::displayProduct() {
    std::cout << product << std::endl;
}