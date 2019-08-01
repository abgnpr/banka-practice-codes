#include <stdio.h>

/* PATTERN:

 * E    `
 * E  A
 * E  A  R
 * E  A  R  T
 * E  A  R  T  H
 * 
*/
// int main() {
//     char patStr[] = "EARTH";
//     for (int i = 0; i < 5; ++i) {
//         for (int j = 0; j <= i; ++j) {
//             putchar(patStr[j]);
//             putchar(' ');
//         }
//         putchar('\n');
//     }
// }



/* a recursive solution */

void printTillHere(char *c, char *s) {
    if (c > s)
        printTillHere(c-1, s);
    putchar(*c);
    putchar(' ');
}

int main() {
    char 
        patStr[] = "EARTH",
        *c = patStr;

    for (char *ch = patStr; *ch!='\0'; ++ch) {
        printTillHere(ch, patStr);
        putchar('\n');
    }
}