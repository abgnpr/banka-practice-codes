#include <stdio.h>
#include <string.h>

/* Input a sentence and print the number
 * of pallindrome words it contains. */
int main(void)
{
    char s[100], w[20], wR[20];
    int i, j, wl, c = 0;

    gets(s);
    strcat(s, " ");
    w[c] = '\0';

    for (i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
        {
            w[c++] = s[i];
        }
        else
        {
            w[c] = '\0';
            wl = strlen(w);
            for (j = 0; j < strlen(w); j++)
                wR[j] = w[--wl];
            wR[j] = '\0';
            if (stricmp(w, wR) == 0)
                printf("PAL : %s\n", w);
            c = 0;
        }
    }
}