#include <iostream>
#include <vector>
using namespace std;

// version 1

int main() {
  
  vector<int> arr;
  
  // input 
  while (arr.size() < 5)
    arr.push_back([]{int n; cin >> n; return n;}());

  // analyze array for negative : nNegs
  int nNegs = 0;
  for (int i : arr) if (i < 0) ++nNegs;

  if (nNegs > 0 && nNegs < arr.size()) {
    // shift when a negative is found
    // add that negative at the end of arr
    int i = 0, nAt_i;
    while (nNegs > 0) {
      if (arr[i] < 0) {
        nAt_i = arr[i];
        arr.erase(arr.begin()+i);
        arr.push_back(nAt_i);
        --nNegs;
      }
      ++i;
    }
  }

  // print arr
  for (int i : arr) cout << i << ' ';

}
