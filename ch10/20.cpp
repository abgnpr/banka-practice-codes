#include <iostream>
#include <string>

using namespace std;

/* Input a sentence and print avg
 * characters per word. */
int main() {

  string s = "";
  getline(cin, s);

  s += " ";

  short nC = 0, nW = 0, sum = 0;
  for (char i : s) {
    if (i == ' ' && nC != 0) {
      sum += nC;
      ++nW; nC = 0;
    } else ++nC;
  }

  cout << (sum*1.0)/nW;

}
