#include <stdio.h>
#include <string.h>
#include "strutil.h"

#define MAXLEN 100

/* Input a sentence and convert alternate
 * words in uppercase and lowercase. */
int main() {
    char 
        s[MAXLEN+2], S[MAXLEN+2],
        word[MAXLEN];

    int nWord = 0, nLtr;
    
    fgets(s, MAXLEN+2, stdin);
    s[strlen(s)-1] = ' ';

    char *startPos = s, *endPos;
    while ((endPos = strchr(startPos,' ')) != NULL) {
        if (startPos == endPos) {
            strcat(S, " ");
            startPos += 1;
        } else {
            nLtr = 0;
            for (char *ch = startPos; ch < endPos; ++ch)
                word[nLtr++] = *ch;
            word[nLtr] = '\0';
            nWord += 1;
            if (nWord%2==0)
                strlwr(word);
            else
                strupr(word);
            strcat(S, word);
            strcat(S, " ");
            startPos = endPos + 1;
        }
    }

    printf("%s\n",S);
}