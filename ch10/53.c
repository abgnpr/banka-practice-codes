#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the words
 * that contain more than one type of 
 * vowels. */
int main(void) {

    int totalWords, i, j, nV;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN], 
        prev_v, ch;

    fgets(s, MAXLEN, stdin);
    totalWords = obtainWordsFrom(s, words);

    for (i = 0; i < totalWords; ++i) {
        for (j = nV = 0; j < strlen(words[i]); ++j) {
            if (isVowel(ch = words[i][j])) {
                if (++nV > 1 && ch != prev_v) {
                    printf("%s\n", words[i]);
                    break;
                } else prev_v = ch;
            } // fi
        } // for j
    } // for i

}
