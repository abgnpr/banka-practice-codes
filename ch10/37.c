#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* input a sentence and print the length
 * of the biggest word in it. */
int main()
{
    char s[MAXLEN], w[20];
    int i, c = 0, bigLen;

    fgets(s, MAXLEN, stdin);
    strcat(s, " ");
    w[c] = '\0';
    bigLen = 0;

    for (i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
            w[c++] = s[i];
        else
        {
            w[c] = '\0';
            if (strlen(w) > bigLen)
                bigLen = strlen(w);
            c = 0;
        }
    }

    printf("%d", bigLen);
}
