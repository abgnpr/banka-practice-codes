#include <stdio.h>
#include <ctype.h>

/* input a string and check if it is in
 * uppercase, lowercase or mixed  case.
 * Print appropriate message. */

int main() {
    
    char s[100+2];
    fgets(s, 102, stdin);

    unsigned int i, nU, nL;
    
    i = nU = nL = 0;
    for (/* i */; s[i]!='\n' && s[i]!='\0'; ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            ++nU;
        else
        if (s[i] >= 'a' && s[i] <= 'z')
            ++nL;

    if (nU == 0 && nL != 0)
        printf("LOWERCASE\n");   
    else
    if (nU != 0 && nL == 0)
        printf("UPPERCASE\n");
    else
    if (nU != 0 && nL != 0)
        printf("MIXEDCASE\n");
}
