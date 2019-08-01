#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define MAXWORDLEN 50

/* input a string and print the number
 * of times another string appears in
 * it. */
int main() {
    
    char s[MAXLEN+2], 
         s_inp[MAXWORDLEN+2],
         s_match[MAXWORDLEN+2];;
    
    fgets(s, MAXLEN+2, stdin);
    fgets(s_inp, MAXWORDLEN+2, stdin); 

    int
        i, j, nOccr = 0, 
        inpLen = strlen(s_inp)-1,
        runLen = strlen(s)-inpLen+1;

    for (i = 0; i < runLen; ++i) {
        if (s[i] == s_inp[0]) {
            for (j = 0; j < inpLen; ++j)
                s_match[j] = s[i+j];
            s_match[j] = '\n';
            s_match[++j] = '\0';
            if (strcmp(s_inp, s_match)==0)
                ++nOccr;
        }
    }

    printf("%d\n", nOccr);
    return 0;
}
