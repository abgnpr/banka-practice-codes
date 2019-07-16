#include <iostream>
using namespace std;

/* create a 1D array of ten integers 
 * and print the biggest among them */
int main() {
    int arr[10];
    for (int i = 0; i <10; ++i) {
        cin >> arr[i];
    }

    int biggest = arr[0];
    for (int i = 1; i < 10; ++i) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    cout << biggest;
}
