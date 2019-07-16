#include <iostream>
#include <vector>
using namespace std;

/* array of 05 integers and print if all
 * the integers in the array are even or 
 * not. */
int main() {
    vector<int> a;
    while (a.size() < 5) a.push_back(
        []{int n; cin >> n; return n;}()
    );
    bool oddFound = false;
    for(int i : a) if(i%2) oddFound = true;
    oddFound? cout << "No" : cout <<"Yes";
}