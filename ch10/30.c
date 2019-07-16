#include <stdio.h>
#include <string.h>

/* input a sentence and print first and 
 * last letter of each word */
int main()
{
    char s[100], w[50];
    int i, c = 0;

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
            printf("Word : %s\t\t%c %c\n"\
            , w, w[0], w[c - 1]);
            c = 0;
        }
    }
}