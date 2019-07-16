#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the word
 * containing the highest number of c-
 * onsonants. */
int main(int argc, char const *argv[]) {

    int numOfWords, i, j, maxCons, nCons;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN],
    w_wihtMaxCons[MAXWORDLEN];

    fgets(s, MAXLEN, stdin);
    numOfWords = obtainWordsFrom(s, words);

    maxCons = 0;
    for (i = 0; i < numOfWords; ++i) {
        nCons = 0;
        for (j = 0; j < strlen(words[i]); ++j)
            if (!isVowel(words[i][j]) && words[i][j] != '\'')
                nCons += 1;
        if (nCons > maxCons) {
            maxCons = nCons;
            strcpy(w_wihtMaxCons, words[i]);
        }
    }

    printf("%s\n", w_wihtMaxCons);
    return 0;
}
