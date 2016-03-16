//
// Created by Aditya on 16-Mar-16.
//

#include <iostream>
#include "header/EvenFibo.h"


double EvenFibo::findEvenFiboSum(int n) {
    int first = 0;
    int second = 1;
    int current = 0;
    while (current < n) {
        current = first + second;
        if (current % 2 == 0)
            sum += current;
        first = second;
        second = current;
    }
}

void EvenFibo::displaySum() {
    std::cout << sum << std::endl;
}

