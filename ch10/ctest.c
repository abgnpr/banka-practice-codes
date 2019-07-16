#include <stdio.h>
#include "strutil.h"

int main() {

    // Note this comparison !!
    // char s[50] = {'\0'};
    // printf("%d\n", strcmp(s, "")); // -> prints 0

    char s[] = "lorem ipusm sth sth sth";
    char words[5][MAXWORDLEN];
    int nWordsIn_s = obtainWordsFrom(s, words);

    for (int i = 0; i < nWordsIn_s; ++i) {
        printf("%s\n", words[i]);
    }

    printf("%ld\n", sizeof words);

    return 0;

}