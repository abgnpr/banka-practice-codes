#include <string.h>
/*
 * function(s, i) {
 *      if (i == strlen(s)) {
 *          for
 *      }
 * }
 *
*/

#define MAXLEN 100

char s[MAXLEN];
int len;

void print(char *S,  int k) {
    extern char s[];
    extern int len;

    if (k == len-2) for (int i = 0; i < len; ++i)
        // print S + s[i]

    strncpy(S, s, ++k);
    S[k] = '\0';
    print(S, k);
}

int main() {
    extern char s[];
    extern int len;

    strcpy(s, "abhigyan");
    len = strlen(s);

    char S[len+1];

    print(S, 0);
}