#include <stdio.h>
#include <string.h>
#include <ctype.h>

// VARIANT 1

/* Input a string and convert all upper-
 * case letters in it to lowercase. Any
 * character that is not an alphabet 
 * remains as it is */
int main(void) {
    char s[100+2], ch;
    fgets(s, 100+2, stdin);
    for (int i = 0; i < strlen(s) - 1; ++i)
        s[i] = tolower(s[i]);
    fputs(s, stdout);
}
