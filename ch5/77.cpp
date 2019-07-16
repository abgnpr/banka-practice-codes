#include <iostream>
#include <math.h>
using namespace std;

int nD(int n){
    int nd = 0;
    while (n>0){
        ++nd;
        n /= 10;
    }
    return nd;
}

int shift(int n){
    return (n%10)*(int)pow(10, nD(n)-1) + (n/10);
}

int isPrime(int n){
    int N = n;
    while (--n > 1)
        if (N%n == 0) return 0;
    return 1;
}

/* print all circular primes in the 
 * range A to B */
int main() {
    int A, B;
    cin >> A >> B;

    for (int n = A; n <= B; ++n) {
        int z = n, d = nD(n);
        // loop for as many times as
        // there are digits
        while(d > 0 && isPrime(z)){
            z = shift(z); --d;
        }
        if (d == 0) cout << n << '\n';
    }
}