#include <iostream>

using namespace std;


class Multiply {
    int sum;
public:



    Multiply(int n) {
        for (int i = 1; i < n; i++) {
            if (i % 3 == 0 || i % 5 == 0)
                sum += i;
        }
    }

    void displaySum() {
        cout << sum << endl;
    }
};

int main() {
    Multiply multiply = Multiply(1000);

    multiply.displaySum();
    return 0;
}