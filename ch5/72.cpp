#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if (n%([=]()->int{
        int N = n, s = 0;
        while (N > 0) {
            s += N%10;
            N /= 10;
        }
        return s;
        }()) == 0)
        cout << "Yes";
    else
        cout << "No"; 
}