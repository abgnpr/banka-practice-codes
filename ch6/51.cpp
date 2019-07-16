#include <iostream>
using namespace std;

long double fact(long double  x) {
    if(x == 1 || x == 0) return 1;
    else return x * fact(x-1);
}

int main() {
    int n, r; cin >> n >> r;
    cout << fact(n) <<'\n'<< fact(r) <<'\n';
    cout << fact(n) / (fact(r) * fact(n-r));
}
