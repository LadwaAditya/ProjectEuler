#include <iostream>
#include "header/SmallestMultiple.h"
#include "header/SumSquareDiff.h"
#include "header/PrimeThousand.h"
#include "header/LargestProductSeries.h"

using namespace std;


int main() {

//    Multiply multiply = Multiply(1000);
//    multiply.displaySum();
//
//    EvenFibo fibo = EvenFibo(4000000);
//    fibo.displaySum();
//
//    LargestPrime prime = LargestPrime();
//    prime.displayPrime();

//    Palindrom palindrom = Palindrom();
//    palindrom.printPalindrom();

//    SmallestMultiple smallestMultiple = SmallestMultiple();
//    smallestMultiple.printMultiple();

//    SumSquareDiff sumSquareDiff = SumSquareDiff();
//    sumSquareDiff.displaySumSquareDiff();

//    PrimeThousand primeThousand = PrimeThousand();
//    primeThousand.displayPrimeThousand();

    LargestProductSeries productSeries = LargestProductSeries();
    productSeries.displayProduct();

    return 0;
}