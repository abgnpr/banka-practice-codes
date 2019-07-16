#include <iostream>
#include <vector>
using namespace std;

//odd-even sorting into arrays
int main() {
  vector<int> numList, vecEve, vecOdd;
  while (numList.size() < 5) {
    numList.push_back([]{int n; cin >> n; return n;}());
  }
  for (int i : numList) {
    if (i%2==0) vecEve.push_back(i); else vecOdd.push_back(i);
  }
  cout << "Evens : ";
  for (int i : vecEve) cout << i << ' '; cout << '\n';
  cout << "Odds : ";
  for (int i : vecOdd) cout << i << ' ';
}