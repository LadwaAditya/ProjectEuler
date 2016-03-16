#include <iostream>
#include "header/EvenFibo.h"

using namespace std;


int main() {
//    Multiply multiply = Multiply(1000);
//    multiply.displaySum();

    EvenFibo fibo = EvenFibo();
    fibo.findEvenFiboSum(4000000);
    fibo.displaySum();
    return 0;
}