#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

size_t strlen(const char *str) {
    size_t i;
    for (i = 0; *(str+i) != '\0'; ++i)
        ;
    return i;
}

/* input a string and after converting
 * all its alphabets to uppercase, re-
 * place all alphabets with their com-
 * plements. */
int main() {
    
    char s[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin);

    for (int i = 0; i < strlen(s)-1; ++i)
        s[i] = toupper(s[i]);

    for (int i = 0; i < strlen(s)-1; ++i)
        if (isupper(s[i]))
            s[i] = 'Z' - (s[i] - 'A');

    fputs(s, stdout);
}
