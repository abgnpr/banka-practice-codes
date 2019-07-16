#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print the biggest
 * word. If more than 1 word qualify for 
 * being biggest then print all of them.*/
int main()
{
    int i = 0, j = 0, wordNum = 0;
    char s[MAXLEN+2], w[50] = {'\0'}, 
        bigest_words[MAXLEN][50], ch;

    fgets(s, MAXLEN+2, stdin);
    strcpy(bigest_words[0], "");

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
            if ((ch>=65 && ch<=90)
            ||  (ch>=97 && ch<=122)
            ||  (ch == '\'' && j != 0))
                w[j++] = ch;

            else
            {
                w[j] = '\0';
                if (strlen(w) != 0)
                {
                    if (strlen(w) > strlen(bigest_words[0])) {
                        wordNum = 0;
                        strcpy(bigest_words[wordNum++], w);
                    }
                    else if (strlen(w) == strlen(bigest_words[0]))
                        strcpy(bigest_words[wordNum++], w);
                }
                j = 0;
            }
        }

        for (i = 0; i < wordNum; ++i)
            printf("%s\n", bigest_words[i]);
        
        return 0;
    }
}