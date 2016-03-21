//
// Created by Aditya on 21-Mar-16.
//
#include <iostream>
#include "../header/SumSquareDiff.h"

void SumSquareDiff::displaySumSquareDiff() {
    std::cout << sumSquareDiff << std::endl;
}


SumSquareDiff::SumSquareDiff() {
    for (int i = 1; i <= 100; i++)
        sumSquare += i * i;
    for (int j = 1; j <= 100; j++) {
        SquareSum += j;
    }
    SquareSum = SquareSum * SquareSum;

    sumSquareDiff = SquareSum - sumSquare;
}
