#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* input a sentence and print number of
 * words with even length and number of 
 * words with odd length. */
int main(void)
{
    char s[MAXLEN], w[MAXLEN/5];
    int i, c = 0, nE = 0, nO = 0;

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
            if (strlen(w)%2 == 0) 
                ++nE;
            else
                ++nO;
            c = 0;
        }
    }

    printf("nOdd: %d\nnEven: %d\n", nO, nE);
}
