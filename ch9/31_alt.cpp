#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1};
    while (arr.size() < 20)
        arr.push_back(
            arr.at(arr.size()-2) 
            + arr.at(arr.size()-1));
    for (auto i : arr) cout << i << '\n';
}