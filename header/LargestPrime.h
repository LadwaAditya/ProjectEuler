//
// Created by Aditya on 16-Mar-16.
//

#ifndef PROJECTEULER_LARGESTPRIME_H
#define PROJECTEULER_LARGESTPRIME_H


class LargestPrime {
private:
    long long int limit = 600851475143;
    long int primeFactor = 0;

public:


    LargestPrime();

    void displayPrime();

    bool checkPrime(long long int i);
};


#endif //PROJECTEULER_LARGESTPRIME_H
