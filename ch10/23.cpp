#include <iostream>
#include <string>
using namespace std;

/* input a string and print the bigger
 * string out of itself and its reverse. */
int main() {
  
  string s = "", newS = "";
  getline(cin, s);

  for (int i = s.length()-1; i >= 0; --i)
    newS += s[i];

  // comparing strings in cpp
  if (s > newS) cout << s;
  else if (newS > s) cout << newS;
  else cout << "Both are same.";

}