#include <stdio.h>
#include "strutil.h"

/* Input a string and print number of
 * uppercase letters in it. */
int main(void) {

    int i = 0, nU = 0;
    char s[MAXLEN], ch; 
    fgets(s, MAXLEN, stdin);

    while ((ch = s[i++]) != '\n' && ch != '\0')
        if (ch >= 'A' && ch <= 'Z') ++nU;

    printf("%d\n",nU);

}
