//
// Created by Aditya on 16-Mar-16.
//


#include <iostream>
#include "../header/LargestPrime.h"

LargestPrime::LargestPrime() {
    for (long long int i = 2; i < limit / 2; i++) {
        if (limit % i == 0) {
            checkPrime(i);

        }
    }
}


void LargestPrime::displayPrime() {
    std::cout << primeFactor << std::endl;
}


bool LargestPrime::checkPrime(long long int num) {
    for (long j = 2; j < num / 2; j++) {
        if (num % j == 0) {
            break;
        } else {
            primeFactor = num;

        }
    }
    std::cout << primeFactor << std::endl;
}
