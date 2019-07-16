#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print number of
 * vowels in each word of the sentence. */
int main()
{
    char s[100], w[50];
    int i, j, c = 0, nVowels;

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
            nVowels = 0;
            for (j = 0; j < strlen(w); ++j)
                if (isVowel(w[j]))
                    ++nVowels;
            printf("Vowels in %s : %d\n", w, nVowels);
            c = 0;
        }
    }
}