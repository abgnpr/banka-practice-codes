// Enter a word and print its pig-latin
// input : Our world is on planet Earth
// output: urOa orldwa sia noa lanetpa
//         earthEa

#include <iostream>
#include <string>

using namespace std;

/** pseudo code
 * 
 * input a sentence in s (getline(cin,s))
 * append a space to s
 * 
 * wordBeg = 0
 * for i = 0 to s.length() if s[i] is a whiteline character
 *      if (i == wordBeg)
 *          S += s.at(i)
 *      
 *      else
 *          word = s.substr(wordBeg, (i-wordBeg-1))
 *          S += word.substr(1) + word.at(0) + word.at(i)
 *         
 *      wordBeg = i + 1
 * 
 * print S
 * 
*/

int main() {

    string s, word, S;
    getline(cin, s);
    s += " ";

    size_t i, wordBeg = 0;
    for (i = 0; i < s.length(); ++i) if (isspace(s.at(i))) {
        if (i == wordBeg)
            S += s.at(i);
        else
            S += s.substr(wordBeg+1, (i-wordBeg-1))
               + s.at(wordBeg) + "a" + s.at(i);
        wordBeg = i + 1;
    }

    cout << S << '\n';
    return 0;

}
