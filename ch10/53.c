#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the words
 * that contain more than one type of 
 * vowels. */
int main(void) {

    int totalWords, i, j, firstFound, wIsOf_reqKind;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN], prev_ch;

    fgets(s, MAXLEN, stdin);
    totalWords = obtainWordsFrom(s, words);

    for (i = 0; i < totalWords; ++i) {
        firstFound = FALSE;
        wIsOf_reqKind = FALSE;
        for (j = 0; j < strlen(words[i]); ++j) {
            if (isVowel(words[i][j]) && !wIsOf_reqKind) {
                if (prev_ch != words[i][j] && firstFound) {
                    wIsOf_reqKind = TRUE;
                } else {
                    prev_ch = words[i][j];
                }
            }
            wIsOf_reqKind? printf("%s\n", words[i]) : printf("");
        }
    }
}