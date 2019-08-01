#include <stdio.h>
#include "strutil.h"

/* Q. 72 case insensitive
   banka method */
void main(void) {
    
    char a[100], b[100];
    int c = 0;

    fgets(a, 100, stdin);
    fgets(b, 100, stdin);

    strupr(a);
    strupr(b);
    
    if (b[strlen(b)-1] == '\n') {
        b[strlen(b)-1] = '\0';
    }

    char* pos = strstr(a, b);

    while (pos != NULL) {
        c += 1;
        pos = strstr(++pos, b);
    }

    printf("%d\n", c);
}
