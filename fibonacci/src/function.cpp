#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

std::vector<int> fib_below_n(unsigned int n) {
    std::vector<int> meuvetor;
    int test = 0;
    for (int i = 0;i < n;i++) {
        if (i == 0 || i == 1) {
            meuvetor.push_back(1);
        }
        else {
            test = meuvetor[meuvetor.size() - 1] + meuvetor[meuvetor.size() - 2];
            if (test < n) {
                meuvetor.push_back(test);
            }
            else {
                break;
            }
        }
    }
    return meuvetor;
}

int main()
{
    int n;
    std::vector<int> meuvetor;  
    std::cin >> n;
    meuvetor = fib_below_n(n);
    for (int i = 0; i < meuvetor.size(); i++) {
        std::cout << meuvetor[i] << "\n";
    }
    return 0;
}
