#include <iostream>
using namespace std;

long long fact(int n) {
    if (n==0 || n==1) return 1;
    else return n * fact(n-1);
}

/* smallest :works only for 5 ints*/
int smallest(int a[]){
    int sm = a[0];
    for (int i = 1; i < 5; ++i) {
        if (a[i] < sm) sm = a[i];
    }
    return sm;
}

int main() {

    int arr[5];
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    cout << fact(smallest(arr));
}
