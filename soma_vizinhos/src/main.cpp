/ #include <iostream>

int main(void) {

    int cont, total, n, m;
    while (std::cin >> std::ws >> m >> n) {

        if (n > 1) {
            for (cont = m, total = 0; cont < n + m; cont += 1) {
                total += cont;
            }
        }
        else if (n < 1) {
            for (cont = m, total = 0; cont > n + m; cont -= 1) {
                total -= (cont * -1);
            }
        }
        std::cout << total << std::endl;
    }


}
