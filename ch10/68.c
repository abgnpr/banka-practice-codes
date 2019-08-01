#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* input a string and print it back af-
 * ter replacing all characters in it
 * by the next character in the ascii
 * table */
int main() {
    char s[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin);
    for (int i = 0;
        *(s+i) != '\n' && *(s+i) != '\0'; 
        ++i)
        *(s+i) += 1;
    fputs(s, stdout);
}
