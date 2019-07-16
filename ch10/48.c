#include <stdio.h>
#include "strutil.h"

/* Input a sentence and print the word
 * containing the highest number of number
 * of vowels. */
int main() {
    
    int numOfWords, i, j, nVowels, maxVowels;
    char s[MAXLEN], words[MAXLEN][MAXWORDLEN],
    w_withMaxVowels[MAXWORDLEN];
    
    fgets(s, MAXLEN, stdin);
    numOfWords = obtainWordsFrom(s, words);

    maxVowels = 0;
    for (i = 0; i < numOfWords; ++i) {
        nVowels = 0;
        for (j = 0; j < strlen(words[i]); ++j) {
            if (isVowel(words[i][j]))
                ++nVowels;
        }
        if (nVowels > maxVowels) {
            maxVowels = nVowels;
            strcpy(w_withMaxVowels, words[i]);
        }
    }

    printf("%s\n", w_withMaxVowels);

}