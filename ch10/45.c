#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print it after
 * reversing each individual word in it
 * as well as reversing the sentence 
 * itself */
int main()
{ 
    int i = 0, j = 0, k = 0, wL, wordNum = 0;
    char s[MAXLEN+2], rev_s[MAXLEN+2],
    words[MAXLEN][50], w[50], rev_w[50], ch;

    fgets(s, MAXLEN, stdin);
    w[0] = '\0';

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
                rev_w[0] = '\0';
                wL = strlen(w);
                if (wL > 0)
                {
                    for (k = 0; k < wL; ++k)
                        rev_w[k] = w[wL-k-1];
                    rev_w[k] = '\0';
                    strcpy(words[wordNum++], rev_w);
                }
                j = 0;
            }
        }
    }

    rev_s[0] = '\0';
    while (--wordNum >= 0)
    {
        strcat(rev_s, words[wordNum]);
        strcat(rev_s, " ");
    }

    printf("%s\n", rev_s);

    return 0;
}