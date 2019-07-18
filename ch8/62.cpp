#include <iostream>
using namespace std;

auto isPrime = [](int N) -> bool {
    int n = N;
    while (--n > 1)
        if (N%n == 0) return false;
    return true;
};

/* print all the prime numbers from 
 * a to b. Print total no. of primes
 * printed. */
int main() {
    int a,b, nP = 0;
    cin >> a >> b;
    while (a < b) {
        if (isPrime(a)) {
            ++nP;
            cout << a << '\n';
        }
        ++a;
    }

}