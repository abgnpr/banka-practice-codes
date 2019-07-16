#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define EXIT_SUCCESS 0

/* Enter a string and print if it is a
 * pallindrome or not. */
int main() {

  char s[MAXLEN], newS[MAXLEN] = {'\0'};
  gets(s);

  for (short i = 0, l = strlen(s); i < strlen(s); ++i) {
    newS[--l] = s[i];
  }
  newS[strlen(newS)] = '\0';

  if (strcmp(s, newS) == 0) {
    printf("Pallindrome!\n");
  } else {
    printf("not pallindorme.\n");
  }

  return EXIT_SUCCESS;

}