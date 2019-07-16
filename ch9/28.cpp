#include <iostream>
using namespace std;

int main() {

    int arr[10], n, i;
    
    i = 0; while (i < 10) {
        cin >> n;
        if (n%2==0) {
            arr[i] = n; ++i;
        }
    }

    cout << '\n';

    for (i = 0; i < 10; ++i) {
        cout << arr[i] << '\n';
    }

}