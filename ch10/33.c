#include <stdio.h>
#include <string.h>

/* input a name and print its initials. */
int main() 
{    
    char n[50], pn[20], initials[20], fn[50];
    int i, c = 0;

    gets(n);
    fn[c] = '\0';
    initials[c] = '\0';

    for (i = 0; i < strlen(n); ++i)
    {
        if (n[i] != ' ')
            pn[c++] = n[i];
        else
        {
            pn[c] = '\0';
            char ini[3] = {pn[0], '.', '\0'};
            strcat(initials, ini);
            c = 0;
        }
    }

    pn[c] = '\0';

    strcat(fn, pn);
    strcat(fn, " ");
    strcat(fn, initials);
    puts(fn);

    return 0;
}

