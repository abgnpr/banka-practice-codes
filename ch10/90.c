// Enter a word and print its pig-latin
// input : Our world is on planet Earth
// output: urOa orldwa sia noa lanetpa 
//         earthEa

#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* pseudo code
 * 
 * input a sentence in s (fgets)
 * append a space to s (replace \n)
 * 
 * startPos = beginning of s
 * spacePos = position of first ' ' in s
 * 
 * while there is another space (spacePos = this spacePos)
 *      if (startPos == spacePos)
 *          startPos++
 *      
 *      else
 *          word = copy the slice s(startPos to spacePos-1) to word
 *          word = word + firstChar(word)
 *          word = shift<<1(word) + a
 *          new_S = new_S + word + " "
 * 
 *          startPos = spacePos + 1
 * 
 * print new_S
 * 
*/

int main() {
    
    char s[MAXLEN+2], word[MAXLEN/2], S[MAXLEN+2];
    fgets(s, MAXLEN+2, stdin); s[strlen(s)-1]=' ';

    char *startPos = s, *spacePos;
    while ((spacePos = strchr(startPos, ' ')) != NULL) {
        if (startPos == spacePos) {
            ++startPos;
        
        } else {
            *word = '\0';
            strncpy(word, startPos+1, (spacePos-startPos-1));
            word[spacePos-startPos-1] = '\0';
            strncat(word, startPos, 1);
            strcat(word, "a");
            
            strcat(S, word);
            strcat(S, " ");
            
            startPos = spacePos + 1;
        }
    }

    printf("%s\n", S);
    
}

// con : doesn't work with tabs