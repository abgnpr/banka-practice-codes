#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print number of
 * words that start with a vowel. */
int main()
{
    char s[100], w[50];
    int i, c = 0, nW = 0;

    gets(s);
    strcat(s, " ");
    w[c] = '\0';

    for (i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
            w[c++] = s[i];
        else
        {
            w[c] = '\0';
            if (isVowel(w[0]))
                nW = nW + 1;
            c = 0;
        }
    }

    printf("%d", nW);
}