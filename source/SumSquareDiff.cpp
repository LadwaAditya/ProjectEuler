//
// Created by Aditya on 21-Mar-16.
//

#include "../header/SumSquareDiff.h"

void SumSquareDiff::displaySumSquareDiff() {
    std::cout << sumSquareDiff << std::endl;
}


SumSquareDiff::SumSquareDiff() {
    for (int i = 1; i <= 10; i++)
        sumSquare += i * i;
    for (int j = 1; j <= 10; j++) {
        SquareSum += i;
    }
    SquareSum = SquareSum * SquareSum;

    sumSquareDiff = sumSquare - SquareSum;
}
