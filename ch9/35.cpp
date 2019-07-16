#include <iostream>
#include <vector>
using namespace std;
/* array of 10 integers and check if all
 * the numbers are in ascending order or 
 * not. */
int main() {
    vector<int> arr;
    for(int i = 0; i < 5; ++i)
        arr.push_back([]{int n; cin >> n; return n;}());
    bool isAsc = true;
    for(int i = 0; i < 4; ++i)
        if(arr[i] > arr[i+1]) isAsc = false;
    isAsc? cout << "YES" : cout << "NO";
}