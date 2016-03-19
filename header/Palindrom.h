//
// Created by Aditya on 19-Mar-16.
//

#ifndef PROJECTEULER_PALINDROM_H
#define PROJECTEULER_PALINDROM_H


class Palindrom {

private:
    long int largestPalindrom = 0;

public:
    Palindrom();
    bool isPalindrom(long num);
    void printPalindrom();
};


#endif //PROJECTEULER_PALINDROM_H
