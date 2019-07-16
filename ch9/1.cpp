/* 1D array containing 10 integers
 * print the sum and average of the
 * numbers stored. */

#include <iostream>
using namespace std;

int main() {
    int i, a[10], s=0;
    double avg;
    cout << "Enter 10 no.s : \n";
    for (int i = 0; i <= 9; ++i) {
        cout << "Enter num"<<i+1<<" : ";
        cin >> a[i];
        s +=  a[i];
    }
    avg = s / 10.0;
    cout << "\nSum : " << s << "\n";
    cout << "Avg : " << avg << '\n';
}