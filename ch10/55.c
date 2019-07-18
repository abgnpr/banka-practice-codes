#include <stdio.h>
#include "strutil.h"

/* input a string and print the number
 * of different types of vowels it
 * contains. */
int main(void) {
  
    int heatMap[5][2], nMatches, i;
    char s[MAXLEN];
    // searchChars[] = "AEIOUaeiou";

    fgets(s, MAXLEN, stdin);
    nMatches = getHeatMap(s, "aeiou", 0, heatMap);

    for (i = 0; i < nMatches; ++i) {
        printf("%c - %d\n", heatMap[i][0], heatMap[i][1]);
    }

    return 0;
}
