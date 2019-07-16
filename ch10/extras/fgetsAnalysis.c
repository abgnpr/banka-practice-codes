#include <stdio.h>

int main() {

    // dummy var for break steps
    int br = 0; 

    char s[5];
    
    fgets(s, 5, stdin);

    ++br; // dummy op

    printf("%s", s);

}

/**
 *  for a char s[sz]; // sz -> size
 *
 *  string input using fgets is in the
 *  form:
 *
 *  c0 c1 c2 ...... c(sz-3) \n \0
 *  when numOfChars <  (sz-1)
 *
 *  c0 c1 c2 ...... c(sz-2) \0
 *  when numOfChars == (sz-1)
 *
 *  c0 c1 c2 ...... c(sz-2) \0
 *  when numOfChars >  (sz-1)
 *
 *  In the second case above, mark that
 *  '\n' is gone and in the third case
 *  all characters beyond c(sz-2) are
 *  also gone, besides '\n'.
 *
 *  We can always check the value
 *  returned in c[sz-2] to check if the
 *  string entered was bigger our limit.
*/

