#include <iostream>
using namespace std;
// create an array of 10 integers and
// print after reversing the entire 
// array.
int main(int argc, char const *argv[])
{
  int a[10], b[10], i;
  for(i = 0; i < 10; ++i)
    cin >> a[i];
  cout << "\nReverse : \n";
  for(i = 0; i < 10; ++i)
    b[i] = a[9-i];
  for (i = 0; i < 10; ++i)
    cout << b[i] << ' ';
  cout << '\n';
  return 0;
}
