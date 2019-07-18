#include <iostream>
#include <functional>
using namespace std;

// factorial
function<size_t(int)> fact = [](int n) -> size_t {
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n-1);
};

// sum of series
int main(void) {
    double sum = 0.0;
    for (int num = 0, den = 1; den <= 10; ++den)
        sum += (fact(num++) * 1.0) / den;
    cout << sum << '\n';
}