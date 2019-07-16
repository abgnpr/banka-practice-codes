#include <stdio.h>
#include <string.h>

/* Input a sentence and print each word
 * separately but in reverse. */
int main()
{
    char s[100], w[20], wRev[20];
    int i, j, wL, c = 0;

    gets(s);
    strcat(s, " ");
    w[c] = '\0';

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            w[c] = s[i];
            c = c + 1;
        }
        else
        {
            w[c] = '\0';
            for (j = 0, wL = strlen(w); j < strlen(w); j++)
            {
                wRev[j] = w[--wL];
            }
            wRev[j] = '\0';
            puts(wRev);
            c = 0;
        }
    }
}