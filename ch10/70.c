#include <stdio.h>
#define MAXLEN 100

char nextVowel_ifVowel(char v) {

    char *V; int i;
    
    if (v >= 'a' && v <= 'z')
        V = "aeioua\0";
    else
    if (v >= 'A' && v <= 'Z')
        V = "AEIOUA\0";
    else
        return v;

    for (i = 0; i < 6; ++i)
        if (v == *(V+i)) return *(V+i+1);

    return v;
}

/* input a string and print it back af-
 * ter replacing its vowel by the next
 * vowel in the sequence "AEIOU" */
int main(void) {
    
    char s[MAXLEN+2];
    
    fgets(s, MAXLEN+2, stdin);

    for (int i = 0; s[i]!='\n' && s[i]!='\0'; ++i)
        s[i] = nextVowel_ifVowel(s[i]);

    fputs(s, stdout);
}
