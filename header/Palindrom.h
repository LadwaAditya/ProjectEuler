//
// Created by Aditya on 19-Mar-16.
//

#ifndef PROJECTEULER_PALINDROM_H
#define PROJECTEULER_PALINDROM_H


class Palindrom {

private:
    long int largestPalindrom = 0;

    bool isPalindrom(long num);

public:
    Palindrom();

    void printPalindrom();
};


#endif //PROJECTEULER_PALINDROM_H
