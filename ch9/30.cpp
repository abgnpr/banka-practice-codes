#include <iostream>
using namespace std;

/* create an array of 10 integers
 * and print it after filling it 
 * with 10 prime numbers. */
int main() {

    int arr[4];
    int n, i;

    i = 0; while (i < 4) {
        cin >> n;
        if ([=]()->int{
            if (n <= 1) return false;
            int i = n;
            while(--i > 1)
                if (n%i==0) return false;
            return true;
        }()) {
            arr[i] = n;
            ++i;
        }
    }

    cout << '\n';

    for (i = 0; i < 4; ++i) {
        cout << arr[i] << '\n';
    }

}