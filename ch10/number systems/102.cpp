#include <iostream>
#include <vector>
using namespace std;

class CombiGenerator {
    private:

    string s;
    vector<bool> letter_used;

    void fixAnother_andPrint(string S = "") {
        if (S.length() == s.length())
            cout << S << '\n';
        else
            for (size_t i = 0; i < letter_used.size(); ++i)
                if (!letter_used[i]) {
                    letter_used[i] = true;
                    fixAnother_andPrint(S+s[i]);
                    letter_used[i] = false;
                }
    }

    public:

    void generate_and_print(const string str) {
        s = str;
        for (size_t i = 0; i < s.length(); ++i)
            letter_used.push_back(false);
        
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