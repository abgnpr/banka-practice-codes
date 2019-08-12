#include <iostream>
#include <string>
using namespace std;

int main(void)
{

  string s, new_S, word,
      vowels = "aeiouAEIOU";

  getline(cin, s);
  s += " ";

  bool isExtraSpace = false;
  if (isspace(s[0]))
    isExtraSpace = true;

  for (char ch : s)
    if (isspace(ch))
    {
      if (isExtraSpace)
        new_S += ch;

      else
      {
        int k;
        for (k = 0; k < word.length(); k++)
          if (vowels.find(word.at(k)) != -1)
            break;

        if (k < word.length())
          new_S += word.substr(k) + word.substr(0, k) + "ay" + ch;
        else
          new_S += word + ch;

        word = "";
        isExtraSpace = true;
      }
    }
    else
    {
      word += ch;
      isExtraSpace = false;
    }

  cout << new_S << '\n';
}