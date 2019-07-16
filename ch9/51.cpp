#include <iostream>
using namespace std;

int main() {
  
  // two separate arrays of 5 integers each
  int a[5], b[5];
  
  // input array A
  cout << "\nEnter array A: ";
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  
  // input array B
  cout << "\nEnter array B: ";
  for (int i = 0; i < 5; ++i) {
    cin >> b[i];
  }
  
  // swapping
  for (int i = 0; i < 5; i++) {
    a[i] = a[i] + b[i];
    b[i] = a[i] - b[i];
    a[i] = a[i] - b[i];
  }

  // printing
  cout << "\nA\tB\n";
  for (int i = 0; i < 5; ++i)
    cout << a[i] << '\t' << b[i] << '\n';

}