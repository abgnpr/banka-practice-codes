#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

/* Input a string and print the count of
 * each alphabet in it. */
int main() {
    char
        s[MAXLEN+2], ch, *pos,
        *alphs = "abcdefghijklimnopqrstuvwxyz";

    int alphCounts[26], i;

    fgets(s, MAXLEN+2, stdin);
    for (i = 0; i < 26; ++i)
        alphCounts[i] = 0;

    for (i = 0; (ch = s[i])!='\n'&&ch!='\0'; ++i)
        if ((pos = strchr(alphs, tolower(ch))) != NULL)
            alphCounts[pos-alphs] += 1;

    for (i = 0; i < 26; ++i) if (alphCounts[i] != 0)
        printf("%c : %d\n", alphs[i], alphCounts[i]);
}