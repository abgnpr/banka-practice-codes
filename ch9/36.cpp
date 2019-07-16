#include <iostream>
#include <vector>
using namespace std;

int reverse(int n) {
    int r = 0; do {
        r = r*10 + n%10;
    } while((n /= 10) > 0);
    return r;
}

/* create an array of 5 integers and
 * print it after reversing each number
 * in the array individually */
int main() {
    vector<int> arr; 
    while (arr.size() < 5)
        arr.push_back([]{int n; cin >> n; return n;}());
    for (int i = 0; i < arr.size(); ++i)
        arr.at(i) = reverse(arr.at(i));
    for (int i : arr) cout << i << '\n';
}