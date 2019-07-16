#include <iostream>
using namespace std;

/* main : prints hcf of n numbers */
int main() {
    
    int a, b, n, i, hcf, r;
    
    cout << "Enter n: "; 
    cin >> n; cout << "\nEnter numbers:\n";
    
    cin >> a;
    
    i = 0;
    while (++i <= n-1) {
        cin >> b;
        while ((r=a%b) != 0) {
            a = b;
            b = r;
        }
        a = b;
    }

    hcf = b;
    cout << "\nhcf = " << hcf << "\n";

}