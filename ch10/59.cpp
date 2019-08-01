#include <iostream>
#include <string>
using namespace std;

/* Input a string and convert all lower-
 * case letters in it to upper-case. */
int main(void) {
    string s; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}
