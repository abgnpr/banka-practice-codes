#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a string and print it after 
 * reversing it programmatically. */
int main() {
  
  short i, len;
  char s[MAXLEN], newS[MAXLEN] = {'\0'};
  
  gets(s);

  len = strlen(s);
  
  /* filling newS from the beginning */
  for (i = len-1; i >= 0; --i) {
    newS[len - 1 - i] = s[i];
  }

  puts(newS);

}