#include <stdio.h>
#include <string.h>

#define MAXNLEN 50

/* Input a name and print its initials.
 * Consider that there might be more
 * than one spaces between two words.
 * You may also consider spaces at the
 * beginning and end of the sentences. */
int main() {
    
    char 
        name[MAXNLEN+2], inits[10],
        name_asReq[MAXNLEN+2],
        *startPos, *endPos;
    
    fgets(name, MAXNLEN+2, stdin);
    if (name[strlen(name)-1] == '\n')
        name[strlen(name)-1]  = '\0';

    startPos = name;
    while ((endPos = strchr(startPos,' '))!=NULL) {
        if (endPos == startPos) {
            startPos += 1;
        }
        else {
            strncat(inits, startPos, 1);
            strcat(inits, ".");
            startPos = endPos + 1;
        }
    }
    strcat(name_asReq, startPos);
    strcat(name_asReq, " ");
    strcat(name_asReq, inits);

    printf("%s\n", name_asReq);
    return 0;

}