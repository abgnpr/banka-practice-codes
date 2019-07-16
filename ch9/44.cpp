#include <iostream>
#include <vector>
using namespace std;

/* merge arrays */
vector<int> merge (vector<int>a, vector<int>b) {
  for (int i : b)
    a.push_back(i);
  return a;
}

int main() {
  vector<int> a = {2, 4, 6, 8, 10};
  vector<int> b = {1, 2, 3, 4};
  vector<int> c = merge(a, b);
  for (int i : c) {
    cout << i << ' ';
  }
}