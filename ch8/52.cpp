#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool isPrime(int X) {
    int n = X;
    while (--n > 1)
        if (X%n == 0) return false;
    return true;
}

/* Print all the twin prime numbers btw
 * 2 given numbers. */
int main(void) {
    
    int a, b;
    vector<pair <int,int> > twinPrimes;

    cin >> a >> b;

    while (a+2 < b) {
        if (isPrime(a) && isPrime(a+2))
            twinPrimes.push_back(make_pair(a, a+2));
        ++a;
    }

    for (auto i : twinPrimes)
        cout << i.first << " " << i.second << '\n';

}