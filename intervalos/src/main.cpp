#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


int main(void) {
    int x;
    double i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
    double pc1 = 0, pc2 = 0, pc3 = 0, pc4 = 0, pc5 = 0;
    while (cin >> std::ws >> x) {
        m++;
        if (x >= 0 && x < 25) {
            i++;
        }
        else if (x >= 25 && x < 50) {
            j++;
        }
        else if (x >= 50 && x < 75) {
            k++;
        }
        else if (x >= 75 && x < 100) {
            l++;
        }
        else {
            n++;
        }
    }


    pc1 = ((i / m) * 100);
    pc2 = ((j / m) * 100);
    pc3 = ((k / m) * 100);
    pc4 = ((l / m) * 100);
    pc5 = ((n / m) * 100);

    std::cout << setprecision(4) << pc1 << std::endl;
    std::cout << setprecision(4) << pc2 << std::endl;
    std::cout << setprecision(4) << pc3 << std::endl;
    std::cout << setprecision(4) << pc4 << std::endl;
    std::cout << setprecision(4) << pc5 << std::endl;

    return 0;
}