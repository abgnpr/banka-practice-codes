#include <iostream>
using namespace std;

/* returns sum of square of all natural
 * numbers from 1 to n  */
auto sum_sqOf_1toN = [](size_t n) -> long double {
    return (n*(n+1)*(2*n+1))/6.0;
};

/* returns sum of square of all natural
 * numbers from a to b  */
auto sum_sqOf_aTob = [](size_t a, size_t b) -> long double {
    return a>b?
        sum_sqOf_1toN(a) - sum_sqOf_1toN(b):
        sum_sqOf_1toN(b) - sum_sqOf_1toN(a);
};

int main() {
    long int a, b;
    cin >> a;
    cin >> b;
    cout << sum_sqOf_aTob(a, b) << '\n';
}