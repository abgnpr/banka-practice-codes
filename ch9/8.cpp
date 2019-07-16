#include <iostream>
using namespace std;

int main() {
    int i, arr[5];
    for (i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    for (i = 0; i < 5; ++i) {
        if(arr[i]%2) arr[i] = -2;
        else arr[i] = -1;
    }
    for (i = 0; i < 5; ++i) {
        cout << arr[i] << ' ';
    }
}