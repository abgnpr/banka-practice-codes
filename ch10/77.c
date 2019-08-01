#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print average
 * characters per word in it. 
*/
void main(void) {
    char s[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin);
    s[strlen(s)-1] = ' ';

    int sum = 0, nWords = 0;
    char *startPos = s, *endPos;
    while ((endPos = strstr(startPos, " "))!= NULL) {
        if (startPos == endPos)
            ++startPos;
        else {
            sum += (endPos-startPos);
            nWords += 1;
            startPos = endPos + 1;
        }
    }
    printf("Average letters per word = %0.1f\n",(sum*1.0f)/nWords);
}