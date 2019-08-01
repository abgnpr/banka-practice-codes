#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

/* Input a sentence and print it after
 * changing the case of all the alpha-
 * bets that are next to a vowel. By
 * change of case we mean that upper
 * case should be converted to lower
 * case and lower case should be conv-
 * to uppercase.
*/
int main() {
    char 
        s[MAXLEN+2],
        *vwls = "aeiou";
    
    fgets(s, MAXLEN+2, stdin);

    for (int i = 0; s[i]!='\n' && s[i]!='\0'; ++i)
        if (strchr(vwls, s[i])!=NULL && isalpha(s[i+1]))
            if (isupper(s[i+1]))
                s[i+1] = tolower(s[i+1]);
            else
                s[i+1] = toupper(s[i+1]);

    printf("%s", s);
}