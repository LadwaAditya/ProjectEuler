//
// Created by Aditya on 19-Mar-16.
//

#include <iostream>
#include "../header/Palindrom.h"

Palindrom::Palindrom() {
    std::cout << "Created object" << std::endl;
    for (register int i = 999; i >= 100; i--) {
        for (register int j = 999; j >= 100; j--) {
            if (isPalindrom(i * j)) {
                largestPalindrom = i * j;
                break;
            }

        }
    }
}

bool Palindrom::isPalindrom(long num) {
    int reverse = 0;
    int remainder = 0;
    int ori = num;
    while (num > 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    return reverse == ori;
}

void Palindrom::printPalindrom() {
    std::cout << largestPalindrom << std::endl;
}



