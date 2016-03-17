#include <iostream>
#include "header/EvenFibo.h"
#include "header/Multiply.h"
#include "header/LargestPrime.h"

using namespace std;


int main() {

    Multiply multiply = Multiply(1000);
    multiply.displaySum();

    EvenFibo fibo = EvenFibo(4000000);
    fibo.displaySum();

    LargestPrime prime = LargestPrime();


    return 0;
}