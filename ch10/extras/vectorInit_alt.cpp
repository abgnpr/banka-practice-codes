#include <iostream>
#include <vector>
using namespace std;

int main () {
  std::vector<int> foo (3,100);
  for ( int i : foo ) cout << i << '\n';
}