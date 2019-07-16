#include <iostream>
#include <string>
#include "strutil.h"
using namespace std;

/* Input a sentence and print number of
 * words that start with a vowel. 
 * using STRING data type. */
int main()
{
   string s, w;
   int nW = 0;

   getline(cin, s);
   s += " ";
   w  = "";

   for (int i = 0; i < s.length(); ++i)
   {
        if (s[i] != ' ')
           w += s[i];
        else
        {
            if (isVowel(w[0]))
                ++nW;
            w = "";
        }
   }
   
   cout << nW << '\n';
}
