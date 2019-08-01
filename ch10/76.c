#include <stdio.h>
#include <string.h>
#include "strutil.h"

/* Input a sentence and print percentage
 * occurences of alphabets, vowels,
 * consonants and digits in it. (Vowels
 * and consonants will be counted in 
 * alphabets)
*/
int main() {

    char 
        s[MAXLEN+2], ch,
        *alfs = "abcdefghijklmnopqrstuvwxyz",
        *cons = "bcdfghjklmnpqrstvwxyz",
        *vwls = "aeiou",
        *digs = "0123456789";

    int 
        nAlfs = 0, nVwls = 0,
        nCons = 0, nDigs = 0;
    
    fgets(s, MAXLEN+2, stdin);
    strlwr(s);

    for (int i = 0; (ch = s[i])!= '\n' && ch!='\0'; ++i) {
        if (strchr(alfs, ch)) {
            ++nAlfs;
            if (strchr(cons, ch))
                ++nCons;
            else
            if (strchr(vwls, ch))
                ++nVwls;
        } else
        if (strchr(digs, ch)) {
            ++nDigs;
        }
    }

    printf("\nAlfs:%d \nCons:%d \nVwls:%d \nDigs:%d\n",
        nAlfs, nCons, nVwls, nDigs);
}