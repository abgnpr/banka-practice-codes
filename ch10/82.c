#include <stdio.h>
#include <string.h>

#define MAXLEN  100
#define MAXWLEN 100

/* Input a sentence and print number of
 * vowels in words at even position and
 * number of consonants in words at odd
 * positions.
*/
int main()
{
    char
        s[MAXLEN+2], word[MAXWLEN],
        *startPos, *endPos,
        *vwls = "aeiou",
        *cons = "bcdfghjklmnopqrstvwxyz";

    int nWord, n;

    fgets(s, MAXLEN+2, stdin);
    s[strlen(s)-1] = ' ';

    startPos = s; nWord = 0;
    while ((endPos = strchr(startPos, ' ')) != NULL)
    {
        if (endPos == startPos) /*dealing with spaces*/
        {
            startPos += 1;
        }
        else
        {
            ++nWord; n = 0; word[0] = '\0';
            strncat(word, startPos, endPos - startPos);
            if (nWord%2 == 0)
            {
                for (char *ch = startPos; ch < endPos; ++ch)
                    if (strchr(vwls, *ch)) ++n;
                printf("%s has %d vwls.\n", word, n);
            }
            else
            {
                for (char *ch = startPos; ch < endPos; ++ch)
                    if (strchr(cons, *ch)) ++n;
                printf("%s has %d cons.\n", word, n);
            }
            startPos = endPos + 1;
        }
    }
}