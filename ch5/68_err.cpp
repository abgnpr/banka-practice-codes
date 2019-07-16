#include <iostream>
using namespace std;

/* Enter a number and print the next prime */
int main() {
    
    int n, a=0, b=1, found = 0;
    
    cout << "Enter n : "; cin >> n;
    
    auto isPrime = [=](int x) {
        while (--x > 1) {
            cout << x << " " << n << "\n";
            if (n%x == 0) return 1;
        } return 0;
    };
    
    // situations like these cause errors
    // while using lambdas

    while(!found) {
        cout << n << '\n';
        if(isPrime(++n)){
            cout << n << '\n';
            cout << n;
            found = 1;
        }
    }

}