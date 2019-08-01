#include <iostream>
#include <string>
using namespace std;

int main(void) {

    string s;
    int i = 0, nU = 0;

    getline(cin, s);

    for (i = 0; i < s.length(); ++i)
        if (s.at(i) > 'A' && s.at(i) < 'Z') ++nU;

    cout << nU << '\n';

}
