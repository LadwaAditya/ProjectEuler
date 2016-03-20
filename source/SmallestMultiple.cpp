//
// Created by Aditya on 20-Mar-16.
//

#include <iostream>
#include "../header/SmallestMultiple.h"

SmallestMultiple::SmallestMultiple() {

    int n = 20;
    bool flag = false;
    while (true) {
        for (int i = 2; i <= 20; i++) {
            flag = n % i == 0;
            if (!flag)
                break;

        }
        if (flag) {
            smallestMultiple = n;
            break;
        }
        n++;
    }
}

void SmallestMultiple::printMultiple() {
    std::cout << smallestMultiple << std::endl;
}



