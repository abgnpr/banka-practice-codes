#include <stdio.h>
#include "strutil.h"

/* input a sentence and print it after
 * making the length of all its words
 * even. Odd sized words will be made
 * even by adding a character 'a' at 
 * their end. */
int main(int argc, char const *argv[]) {
    
    int i, j, wordNum;
    char s[MAXLEN+2], words[MAXLEN][MAXWORDLEN],
     new_s[MAXLEN*2] = {'\0'};

    fgets(s, MAXLEN, stdin);
    wordNum = obtainWordsFrom(s, words);

    for (i = 0; i < wordNum; ++i) {
        if (isOddLength(words[i]))
            strcat(words[i], "a");
        strcat(new_s, words[i]);
        strcat(new_s, " ");
    }

    printf("%s\n", new_s);
    return 0;

}
