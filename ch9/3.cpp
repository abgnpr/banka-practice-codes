/* create a 1D array of N integers and 
 * print the sum of all odd numbers and
 * sum of all even numbers stored in it,
 * separately */

#include <iostream>
using namespace std;

int main() {
    
    int i, N; cin >> N;
    
    int arr[N];
    for (i = 0; i < N; ++i){
        cin  >> arr[i];
    }
    
    int sOdd, sEven;
    for(i = 0; i < N; ++i) {
        if(arr[i]%2) sOdd += arr[i];
        else sEven += arr[i];
    }

    cout << sOdd << " " << sEven;
}