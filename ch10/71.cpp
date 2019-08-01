#include <iostream>
using namespace std;

/* Q.71 using string datatype. */
int main() {

    string s, sL, sU;
    getline(cin, s);

    sL = s;
    sU = s;

    transform(sL.begin(), sL.end(), sL.begin(), ::tolower);
    transform(sU.begin(), sU.end(), sU.begin(), ::toupper);

    if (s == sL)
        cout << "Lowercase\n";
    else
    if (s == sU)
        cout << "Uppercase\n";
    else
        cout << "Mixedcase\n";

    return 0;
}
