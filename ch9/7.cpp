#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int arr[N], i = 0;

    // input
    for (i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int sumOP = 0, sumEP = 0;

    // sums
    for (i = 0; i < N; ++i) {
        if (i%2) sumOP += arr[i];
        else sumEP += arr[i];
    }

    // print
    cout << sumOP << " " << sumEP;
}