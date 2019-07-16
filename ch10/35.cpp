#include <iostream>
#include <string>
using namespace std;

int main(void) {

    string s, snip, ttm/*text to match*/;
    int nOccur, c;
    
    cout << "Enter sentence\n";
    getline(cin, s);

    cout << "Enter search word\n";
    getline(cin, ttm);

    snip = "";
    cout << snip.length() << '\n';

    nOccur = 0;
    for (int i = 0; i <= s.length()-ttm.length(); ++i)
    {
        snip = ""; c = i;
        while(snip.length() < ttm.length())
            snip += s[c++];
        if (snip == ttm) ++nOccur;
    }

    cout << nOccur;
}
