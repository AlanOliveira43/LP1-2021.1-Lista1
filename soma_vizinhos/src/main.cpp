#include <iostream>

int main(void) {

    int cont, total, n, m;
    while (std::cin >> std::ws >> m >> n) {

        if (n > 0) {
            for (cont = m, total = 0; cont < n + m; cont += 1) {
                total += cont;
            }
        }
        else if (n < 0) {
            for (cont = m, total = 0; cont > n + m; cont -= 1) {
                total -= (cont * -1);
            }
        }
        else if (n == 0) {
            total = m;
        }
        std::cout << total << std::endl;
    }


}
