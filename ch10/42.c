#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define TRUE  1
#define FALSE 0

/* Input a sentence and print the smallest
 * word. If more than 1 word qualify for
 * being biggest then print all of them.*/
int main()
{
    int i = 0, j = 0, wordNum = 0, sma_set;
    char s[MAXLEN+2], w[50] = {'\0'}, 
        smalest_words[MAXLEN][50], ch;

    fgets(s, MAXLEN+2, stdin);
    strcpy(smalest_words[0], "");

    /** 
     * this program doesn't produce outputs
     * for lines greater than MAXLEN characters 
     * long */
    if (s[strlen(s)-1] != '\n')
        printf("\nLine max length exceeded!\n\
        [max characters allowed: %d]", MAXLEN);

    else
    {
        sma_set = FALSE;
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
                    if (!sma_set) {
                        strcpy(smalest_words[wordNum++], w);
                        sma_set = TRUE;
                    }
                    else if (strlen(w) < strlen(smalest_words[0])) {
                        wordNum = 0;
                        strcpy(smalest_words[wordNum++], w);
                    }
                    else if (strlen(w) == strlen(smalest_words[0]))
                        strcpy(smalest_words[wordNum++], w);
                }
                j = 0;
            }
        }

        for (i = 0; i < wordNum; ++i)
            printf("%s\n", smalest_words[i]);
        
        return 0;
    }
}