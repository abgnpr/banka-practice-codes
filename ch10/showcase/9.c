#include <stdio.h>
#include <string.h>

/* Enter a string and print the first
 * and the last character in it. Also
 * check is they are same or not. */
int main() {
  char s[50], first, last;
  gets(s);
  printf("%c %c\n", first = s[0], last  = s[strlen(s)-1]);
  (first == last)? printf("YES") : printf("NO");
}