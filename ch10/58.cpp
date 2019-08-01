#include <iostream>
using namespace std;

/* Input a string and convert all
 * uppercase letters in it into upper
 * case */
int main() {

    string s; char ch;
    getline(cin, s);

    for (int i = 0; i < s.length(); ++i)
        if ((ch = s.at(i)) >= 'A' && ch <= 'Z')
            s.at(i) = ch + 32;

    cout << s << '\n';
}
