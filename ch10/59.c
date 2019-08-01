#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

/* input a string and convert all lower
 * case letters in it to upper case */
int main() {

    char s[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin);

    for (int i=0, l=strlen(s); i < l; ++i)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);

    fputs(s, stdout);
}
