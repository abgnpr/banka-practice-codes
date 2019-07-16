#include <stdio.h>
#include <string.h>

/* input a sentence and print number of
 * times another word 'and' appears in
 * it */
int main()
{
    char s[100], w[20];
    char searchText[] = "and";
    int i, c = 0, nTimes;

    gets(s);
    strcat(s, " ");
    w[c] = '\0';

    nTimes = 0;
    for (i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
            w[c++] = s[i];
        else
        {
            w[c] = '\0';
            if (strcmp(w,searchText) == 0)
                ++nTimes;
            c = 0;
        }
    }
    
    printf("%d\n", nTimes);
}
