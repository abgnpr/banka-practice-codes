#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define TRUE  1
#define FALSE  0

/* Input a sentence and print the smallest
 * word. If there are more than one, then
 * print the one that occurs first in the
 * sentence.*/
int main() {

    int i = 0, j = 0, smalest_w_isSet = FALSE;
    char s[MAXLEN+2], w[50] = {'\0'},
        smalest_w[50] = {'\0'}, ch;

    fgets(s, MAXLEN+2, stdin);

    /** 
     * this program doesn't produce outputs for
     * lines greater than MAXLEN characters. */
    if (s[strlen(s)-1] != '\n')
        printf("\nLine max length exceeded! \n\
        [max characters allowed: %d]", MAXLEN);
    
    else
    {
        while ((ch = s[i++]) != '\0')
        {
            if ((ch>=65 && ch<=90)
            ||  (ch>=97 && ch<=122)
            ||  (ch == '\'' && j != 0))
                w[j++] = ch;

            else
            {
                w[j] = '\0';
                if (strlen(w) != 0)
                {
                    if (!smalest_w_isSet)
                    {
                        strcpy(smalest_w, w);
                        smalest_w_isSet= TRUE;
                    }
                    else if (strlen(w) < 
                        strlen(smalest_w))
                        strcpy(smalest_w, w);
                    j = 0;
                }
            }
        }

        printf("%s\n", smalest_w);
        return 0;
    }
}