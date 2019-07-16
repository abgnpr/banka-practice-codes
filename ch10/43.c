#include <stdio.h>
#include <string.h>

#define MAXLEN 100

// converts a sentence to PIG LATIN
int main() {

    int i = 0, j = 0, k = 0, wlen;
    char s[MAXLEN+2], w[50] = {'\0'}, 
        new_S[MAXLEN+2] = {'\0'}, ch;

    fgets(s, MAXLEN+2, stdin);

    if (s[strlen(s)-1] != '\n') {
        printf("\nLine max length exceeded!\n\
        [max characters allowed: %d]", MAXLEN);
    }

    while ((ch = s[i++]) != '\0') {
        if ((ch >= 'A' && ch <= 'Z')
        ||  (ch >= 'a' && ch <= 'z')
        ||  (ch == '\'' && j != 0) )
            w[j++] = ch;
        else {
            w[j] = '\0';
            if ((wlen = strlen(w)) > 0) {
                ch = w[0]; // reused ch
                for (k = 0; k < wlen-1; ++k)
                    w[k] = w[k+1];
                w[k] = ch;
                w[++k] = 'a';
                w[++k] = '\0';
            }
            strcat(new_S, w);
            strcat(new_S, " ");
            j = 0;
        }
    }

    printf("%s\n", new_S);
    
}
