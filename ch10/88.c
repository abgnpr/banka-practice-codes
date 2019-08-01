#include <stdio.h>
#include <string.h>

/* PATTERN GENERATION:

 * E    `
 * E  A
 * E  A  R
 * E  A  R  T
 * E  A  R  T  H
 * 
*/


/* Loopy-de-loop solution */
// void main(void) {
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

// void printLine_FromTo(char *start, char *end) {
//     if (start < end)
//         printLine_FromTo(start, end - 1);
//     putchar(*end);
//     putchar(' ');
// }

// void print_FromTo(char *start, char *end) {
//     if (start < end)
//         print_FromTo(start, end - 1);
//     printLine_FromTo(start, end);
//     putchar('\n');
// }

// void main(void) {
//     char  patStr[] = "MANHATTAN"; // Put anything here
//     print_FromTo(patStr, patStr+strlen(patStr)-1);
// }