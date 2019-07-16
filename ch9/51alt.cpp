#include <iostream>
#include <vector>
using namespace std;

int input(string prompt) {
  int n;
  cout << prompt;
  cin >> n;
  return n;
}

int main() {
  
  vector<int> a, b;
  
  cout << "\nEnter A : ";
  while (a.size() < 5) {
    a.push_back(input(""));
  }
  
  cout << "\nEnter B : ";
  while (b.size() < 5) {
    b.push_back(input(""));
  }

  // swapping the contents
  a.swap(b);

  for (int i = 0; i < 5; i++) {
    cout << a[i] << '\t' << b[i] << '\n';
  }
  
}