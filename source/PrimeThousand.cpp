//
// Created by Aditya on 22-Mar-16.
//

#include <iostream>
#include "../header/PrimeThousand.h"

PrimeThousand::PrimeThousand() {
    int n = 2;
    bool flag = false;
    int count = 0;
    while (true) {
        for (int i = 2; i < n / 2; i++) {
            flag = n % i == 0;
            if (flag)
                break;
        }
        n++;
        if (flag)
            count++;
        if (count == 10001) {
            thousandPrime = n;
            break;
        }
    }

}

void PrimeThousand::displayPrimeThousand() {
    std::cout << thousandPrime << std::endl;
}
