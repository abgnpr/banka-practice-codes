#include <stdio.h>

/* stores 'Ubuntu' in an array and prints
 * the number of times 'u' occurs in it */
int main() {
  char s[] = "Ubuntu";
  int countOf_uU = 0;
  for (int i = 0; i < 6; ++i) {
    if (s[i] == 'u' || s[i] == 'U')
      ++countOf_uU;
  }
  printf("Count of u and U : %d", countOf_uU);
}