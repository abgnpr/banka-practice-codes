#include <stdio.h>
#include <string.h>

/* input a sentence and print each word
 * separately. */
int main(void) {
    
    char s[100], w[20];
    int i, c = 0;

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
            printf("%s\n", w);
            c = 0;
        }
    }
}