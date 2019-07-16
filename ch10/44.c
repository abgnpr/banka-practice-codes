#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print it after 
 * reversing it (word wise).
 * 
 * INPUT: HAPPY NEW YEAR
 * OUTPUT: YEAR NEW HAPPY */
int main(void)
{
    int i = 0, j = 0, wordNum = 0, step = 0;
    char s[MAXLEN+2], w[50] = {'\0'},
     rev_s[MAXLEN+2], words[MAXLEN][50], ch;

    fgets(s, MAXLEN+2, stdin);

    if (s[strlen(s)-1] != '\n')
        printf("\nLine max length exceeded!\n\
        [max characters allowed: %d]", MAXLEN);
    else
    {
        while ((ch = s[i++]) != '\0')
        {
            if ((ch >= 'A' && ch <= 'Z')
            ||  (ch >= 'a' && ch <= 'z')
            ||  (ch == '\'' && j != 0) )
                w[j++] = ch;
            else
            {
                w[j] = '\0';
                if (strlen(w) > 0)
                    strcpy(words[wordNum++], w);
                j = 0;
            }
        }
    }
    
    while (--wordNum >= 0) 
    {
        strcat(rev_s, words[wordNum]);
        strcat(rev_s, " ");
    }

    printf("%s\n", rev_s);

}