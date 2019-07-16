#include <iostream>
#include <vector>
using namespace std;

// program to create a 1D array of three 
// integers and print after shifting 
// the values at each location to the
// right by one index and placing the
// values at last index to index 0.

// by accessing elements using []

int input(string prompt) {
  int n;
  cout << prompt;
  cin >> n;
  return n;
}

vector<int> shiftOne(vector<int> vec) {
  int last = vec[vec.size()-1];
  for (int i = vec.size(); i > 0; --i)
    vec[i] = vec[i-1];
  vec[0] = last;
  return vec;
}

int main() { 
  int N = input("N: ");
  vector<int> arr;
  while (arr.size() < N)
    arr.push_back(input("Enter"+ to_string(arr.size()+1)+" : "));
  arr = shiftOne(arr);
  for (int i : arr)
    cout << i << ' ';
}
