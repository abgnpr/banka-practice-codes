#include <iostream>
using namespace std;

#define BOU 0
#define INC 1
#define DEC 2

// increasing, decreasing and bouncy numbers
int main() {
    
    int n, d1, d2, type; 
    
    cin >> n;
    type = INC; // assume increasing
    d1 = n % 10; // 1st dig from end
    
    while ((n /= 10) > 0) {
        d2 = n % 10; 
        if (type == INC && d2 > d1)
            type = DEC;
        else if (type == DEC && d2 < d1)
            type = BOU;
        d1 = d2;
    }

    if (type == INC) 
        cout << "Increasing";
    else if (type == DEC)
        cout << "Decreasing";
    else
        cout << "Bouncy";
    
}