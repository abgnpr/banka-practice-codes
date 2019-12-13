#include <iostream>
using namespace std;

class CombiGenerator {
    private:
    string s;

    void fixAnother_andPrint(string S = "") {
        if (S.length() == s.length())
            cout << S << '\n';
        else
            for (char ch : s)
                fixAnother_andPrint(S+ch);
    }

    public:

    void generate_and_print(const string str) {
        s = str;
        fixAnother_andPrint();
    }
};

int main() {
    string str;
    cout << "Enter string : ";
    cin >> str;

    CombiGenerator cgen;
    cgen.generate_and_print(str);

    return 0;
}