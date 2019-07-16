#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print number of
 * words that contain 2 successive same
 * letter at least once. */
int main() {

    int i, j, numOfWords, numOfWords_ofReqKind;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN];

    fgets(s,MAXLEN, stdin);
    numOfWords = obtainWordsFrom(s, words);

    numOfWords_ofReqKind = 0;
    for (i = 0; i < numOfWords; ++i) {
        for (j = 0; j < strlen(words[i])-1; ++j) {
            if (words[i][j] == words[i][j+1]) {
                ++numOfWords_ofReqKind;
                break;
            }
        }
    }

    printf("%d\n", numOfWords_ofReqKind);

}