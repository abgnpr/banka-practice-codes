#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXLEN 100
#define ALPHA  1
#define DIGIT  2

/* Input a string like  "A2B3C7K2"  and 
 * print "AABBBCCCCCCCKK" as the output.
 * The number after the character speci-
 * fies the number of times the charac-
 * ter has to be printed. */
int main() {
    char 
        s[MAXLEN+2], S[MAXLEN+2],
        *posAlpha, *posNxtAlpha, ch;
    
    fgets(s, MAXLEN+2, stdin);

    for (char *ch = s; *ch!='\n' && *ch!='\0'; ++ch)
        if (isalnum(*ch)) strncat(S, ch, 1);
    
    int typeToRead = ALPHA;
    char ch_toPrint, nTimes[10];

    for (char *ch = S; *ch!='\n' && *ch!='\0'; ++ch) {
        if (typeToRead == ALPHA && isalpha(*ch)) {
            ch_toPrint = *ch;
            typeToRead = DIGIT;
        } else
        if (typeToRead == DIGIT && isdigit(*ch)) {
            strncat(nTimes, ch, 1);
            if (!isdigit(*(ch+1))) {
                for (int i = 0; i < atoi(nTimes); ++i)
                    putchar(ch_toPrint);
                nTimes[0] = '\0';
                typeToRead = ALPHA;
            }
        } else {
            printf("Something's wrong with the input!");
            break;
        }
    }

    putchar('\n');
    return 0;
}