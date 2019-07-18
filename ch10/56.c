#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the reverse
 * of the biggest word in it. Also print
 * the number of vowels in that word. */
int main(void) {

    int i, j, totalWords, len, bigest_len, nV;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN],
        bigest_word[MAXWORDLEN];

    fgets(s, MAXLEN, stdin);
    totalWords = obtainWordsFrom(s, words);

    bigest_len = 0;
    for (i = 0; i < totalWords; ++i) {
        if ((len = strlen(words[i])) > bigest_len) {
            bigest_len = len;
            strcpy(bigest_word, words[i]);
            for (j = 0, nV = 0; j < bigest_len; ++j)
                if (isVowel(words[i][j])) ++nV;
        } // fi
    } // end for i

    strrev(bigest_word);
    printf("%s\n%d\n", bigest_word, nV);

}