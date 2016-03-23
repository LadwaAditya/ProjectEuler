//
// Created by Aditya on 23-Mar-16.
//

#include <iostream>
#include "../header/LargestProductSeries.h"

LargestProductSeries::LargestProductSeries() {

    for (int i = 0; i <= 999 - 13; i++) {
        long long int temp = 1;
        for (int j = i; j <= i + 12; j++)
            temp *= num[j];
        if (product < temp)
            product = temp;
    }
}

void LargestProductSeries::displayProduct() {
    std::cout << product << std::endl;
}