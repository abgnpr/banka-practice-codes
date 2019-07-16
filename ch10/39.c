#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print the biggest
 * word. If there are more than one, then
 * print the one that occurs first in the
 * sentence.*/
int main() {

    int i = 0, j = 0;
    char s[MAXLEN+2], w[50] = {'\0'}, 
         bigest_w[50] = {'\0'}, ch;

    fgets(s, MAXLEN+2, stdin);

    /** 
     * this program doesn't produce outputs
     * for lines greater than MAXLEN characters 
     * long */
    if (s[strlen(s)-1] != '\n')
        printf("\nLine max length exceeded!\n\
        [max characters allowed: %d]", MAXLEN);
    
    else
    {
        while ((ch = s[i++]) != '\0')
        {
            if (((ch>=65 && ch<=90)
                || (ch>=97 && ch<=122)
                || (ch == '\''))
            && s[i] != '\0')
                w[j++] = ch;
            else
            {
                w[j] = '\0';
                if (strlen(w) > strlen(bigest_w))
                    strcpy(bigest_w, w);
                j = 0;
            }
        }

        printf("%s\n", bigest_w);
    }
}
