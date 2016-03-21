//
// Created by Aditya on 21-Mar-16.
//
#include <iostream>
#include "../header/SumSquareDiff.h"

void SumSquareDiff::displaySumSquareDiff() {
    std::cout << sumSquareDiff << std::endl;
}


SumSquareDiff::SumSquareDiff() {
    for (int i = 1; i <= 100; i++) {
        sumSquare += i * i;
        SquareSum += i;
    }
    SquareSum = SquareSum * SquareSum;

    sumSquareDiff = SquareSum - sumSquare;
}
