#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a string and print it after 
 * reversing it.
 * use strrev() from <string.h> */
int main() {
  
  char s[MAXLEN], newS[MAXLEN];
  
  gets(s);

  short len = strlen(s);

  // filling new string newS from the end
  for (short i = 0, l = len; i < len; i++) {
    newS[--l] = s[i];
  }
  newS[len] = '\0';

  printf("%s", newS);

}