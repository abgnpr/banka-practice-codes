#include <iostream>
#include <string>
#include "strutil.h"
using namespace std;

/* Input a sentence and print number of
 * words that start with a vowel.
 * using STRING data type ... shorter */
int main()
{
    string s;
    short nW = 0;

    getline(cin, s);
    s = " " + s;

    for (short i = 0; i < s.length(); ++i)
        if (s[i] == ' '
        && isVowel(s[i + 1]))
            ++nW;

    cout << nW << '\n';
}
