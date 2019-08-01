#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

size_t strlen(const char* str) {
    size_t l = 0;
    for (/* l */; *(str+l) != '\0'; ++l)
        ;
    return l;
}

/* PROPER CASE */
/* input a sentence and print it back
 * after converting the first letter
 * of each word to uppercase and rest
 * of the letters in the word to
 * lowercase. */
int main() {

    char s[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin);

    size_t i;

    for (i = 0; !isalpha(s[i]) && i < strlen(s)-1; ++i)
        ;

    if (i == 0) {
        s[i] = toupper(s[i]);
        ++i;
    } else i -= 1;

    for (/* i */; i < strlen(s)-1 ; ++i)
        if (!isalpha(s[i])
        && isalpha(s[i+1])) {
            s[i+1] = toupper(s[i+1]);
            ++i;
        } else 
            s[i] = tolower(s[i]);

    fputs(s, stdout);
}
