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

// check circular prime
int main() {
    int n; cin >> n;
    int d = nD(n);
    while(d > 0)
        isPrime((n=shift(n)))? --d : d = -1;
    (d == -1)? cout << "NO" : cout << "YES";
}