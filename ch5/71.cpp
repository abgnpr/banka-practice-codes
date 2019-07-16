#include <iostream>
using namespace std;

typedef long long ll;

ll concat(ll a, int b) {
    int power = 1, x = b;
    while (x>0) {
        power *= 10;
        x /= 10;
    }
    return a * power + b;
}

void check(ll n) {
    for (int d = 1; d <= 9; ++d) {
        if ([=](){ 
            ll N = n, nD = 0; 
            while (N>0) {
                if (N%10 == d) ++nD;
                N /= 10;
            }
            return nD; 
        }() != 1) { 
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    cout << "Enter n : "; 
    int n; cin  >> n;
    check(concat(concat(n, 2*n), 3*n));
}