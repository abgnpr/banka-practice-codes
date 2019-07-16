#include <iostream>
using namespace std;

int main() {
    long long n; cin >> n;
    while (n > 0)
        !(n%10 == 3 || n%10 == 8)? n = -1 : n /= 10;
    n == -1? cout << "NO" : cout  << "YES";
}