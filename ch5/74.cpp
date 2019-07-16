#include <iostream>
using namespace std;

// Pronic number
int main() {
    int n, N; cin >> N;
    n = N;
    while (n > 1)
        (N%n == 0 && N%(n-1) == 0)? n = 0 : --n;
    (n == 0)? cout << "Pronic" : cout << "Not Pronic";
}