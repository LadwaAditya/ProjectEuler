//
// Created by Aditya on 19-Mar-16.
//

#include <iostream>
#include "../header/Palindrom.h"

Palindrom::Palindrom() {
    std::cout << "Created object" << std::endl;
    for (register int i = 999; i >= 100; i--) {
        for (register int j = 999; j >= 100; j--) {
            long temp = i * j;


        }
    }
    std::cout << isPalindrom(111) << std::endl;
}

bool Palindrom::isPalindrom(long num) {
    int tem = 0;
    int ori = num;
    while (num != 0) {
        tem = num % 10;
        tem = tem * 10;
        num = num / 10;
    }
    return tem == ori;
}



