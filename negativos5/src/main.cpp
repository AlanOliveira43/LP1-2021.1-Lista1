#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
    int num, neg = 0;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> num;
        if (num < 0) {
            neg++;
        }
    }
    std::cout << neg;
    return 0;
}
