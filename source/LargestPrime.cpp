//
// Created by Aditya on 16-Mar-16.
//


#include <iostream>
#include "../header/LargestPrime.h"

LargestPrime::LargestPrime() {

    for (long long int i = limit; i > 0; i--) {
        if (i % limit == 0) {
            checkPrime(i);
        }
    }

}

void LargestPrime::displayPrime() {
    std::cout<<
}

bool LargestPrime::checkPrime(long long int i) {
    return false;
}
