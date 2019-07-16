#include <stdio.h>
#include "strutil.h"

/* input a sentence and print number of
 * words that contains more than one
 * vowels. */
int main(void) {

    int numOfWords, i, j, nV_inWord;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN];

    fgets(s, MAXLEN, stdin);
    numOfWords = obtainWordsFrom(s, words);

    for (i = 0; i < numOfWords; ++i) {
        nV_inWord = 0;
        for (j = 0; j < strlen(words[i]); ++j) {
            if (isVowel(words[i][j])) ++nV_inWord;
        }
        if (nV_inWord > 1)
            printf("%s\n", words[i]);
    }
    
}