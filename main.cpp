#include <iostream>

using namespace std;

int main() {
    double sumThree = 0, sumFive = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0)
            sumThree += i;
        else if (i % 5 == 0)
            sumFive += i;


    }
    cout << sumFive + sumThree << endl;

    return 0;
}