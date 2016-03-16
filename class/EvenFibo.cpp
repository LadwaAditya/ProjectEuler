//
// Created by Aditya on 16-Mar-16.
//

#include <iostream>
#include "../header/EvenFibo.h"


EvenFibo::EvenFibo(int n) {
    int first = 0;
    int second = 1;
    long current = 0;
    while (current < n) {
        current = first + second;
        if (current % 2 == 0)
            sumFibo += current;
        first = second;
        second = current;
    }
}

void EvenFibo::displaySum() {
    std::cout << sumFibo << std::endl;
}

