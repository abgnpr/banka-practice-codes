#include <iostream>
#include <string>
using namespace std;

/* Input a string and print it after 
 * reversing it programmatically. */
int main() {

  // using string data type
  
  string s = "", newS = "";
  getline(cin, s);

  for (short i = s.length()-1; i >=0 ; --i)
    newS += s[i];

  cout << newS;

}