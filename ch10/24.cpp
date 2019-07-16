#include <iostream>
#include <string>

using namespace std;

int isVowel(char ch) {
  switch(ch) {
    case 'a': 
    case 'A': 
    case 'e': 
    case 'E': 
    case 'i': 
    case 'I': 
    case 'o': 
    case 'O': 
    case 'u': 
    case 'U': return 1;
    default : return 0;
  }
}

/* input a string and print it after
 * removing all vowels from it. */
int main() {
  
  string s = "", newS = "";
  getline(cin, s);

  for (short i = s.length()-1; i >= 0; --i)
    if (!isVowel(s[i])) newS += s[i];
  
  cout << newS << '\n';

}