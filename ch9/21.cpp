
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    int i = n;
    while (--i > 1) if (n%i==0) return false;
    return true;
}

/* array of 10 integers and print the 
 * biggest prime number among them */
int main(void) {
    
    int N; cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int bP = 0;
    for (int i = 0; i < N; ++i)
        if (isPrime(arr[i]) && arr[i]>bP)
            bP = arr[i];
    
    if (bP) cout << "Biggest Prime : " << bP;
    else cout << "No primes in the list.";

}