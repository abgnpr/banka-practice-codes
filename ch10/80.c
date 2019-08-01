#include <stdio.h>
#include <string.h>
#include "strutil.h"

#define MAXLEN 100

/* Input a string and print it back after
 * changing its characters in ascending
 * order of ASCII codes. Assume that all
 * all characters in the string are alph-
 * abets in same case. */
int main() {
    char s[MAXLEN], S[MAXLEN], *pos;

    fgets(s, MAXLEN, stdin);
    strlwr(s);

    int c = 0;
    for (char i = 'a'; i <= 'z'; ++i) {
        pos = s;
        while ((pos = strchr(pos, i)) != NULL) {
            S[c++] = s[pos-s];
            ++pos;
        }
    }
    S[c] = '\0';
    
    printf("%s\n", S);
}