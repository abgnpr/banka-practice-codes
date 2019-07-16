#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the words
 * that do not contain any vowels */
int main(void) {

    int i, j, totalWords, nV = 0, containsV;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN];

    fgets(s, MAXLEN, stdin);
    totalWords = obtainWordsFrom(s, words);

    for (i = 0; i < totalWords; ++i) {
        containsV = FALSE;
        for (j = 0; j < strlen(words[i]) && !containsV; ++j)
            if (isVowel(words[i][j])) containsV = TRUE;
        containsV?: printf("%s\n", words[i]);
    }

}
