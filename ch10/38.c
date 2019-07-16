#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define UNDEFINED -1

/* input a sentence and print the length
 * of the biggest word in it. */
int main()
{
    char s[MAXLEN], w[20];
    int i, c = 0, smaLen;

    fgets(s, MAXLEN, stdin);
    strcat(s, " ");
    w[c] = '\0';
    smaLen = UNDEFINED;

    for (i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
            w[c++] = s[i];
        else
        {
            w[c] = '\0';
            if (smaLen == UNDEFINED)
                smaLen = strlen(w);
            if (strlen(w) < smaLen)
                smaLen = strlen(w);
            c = 0;
        }
    }

    printf("%d", smaLen);
}
