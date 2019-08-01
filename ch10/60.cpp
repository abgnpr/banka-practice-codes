#include <iostream>
using namespace std;

/* input a string and convert all upper
 * case letters in it to lower case
 * and all lower case letters in it to
 * upper case */
int main() {

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); ++i)
        if (isupper(s.at(i)))
            s.at(i) = tolower(s.at(i));
        else if (islower(s.at(i)))
            s.at(i) = toupper(s.at(i));

    cout << s << '\n';
}
