#include <stdio.h>
#include <string.h>

#define MAXLEN 100

void firstLetter_toEnd(char s[]) {
  int i = 0;
  while (s[i] == ' ') ++i;
  char fl = s[i];
  while (i < strlen(s)-1) {
    s[i] = s[i+1];
    ++i;
  }
  s[i] = fl;
  return;
}

/* input a string and manipulate it such 
 * that first letter of the string goes to 
 * the last. */
int main() {
  char s[MAXLEN];
  gets(s);
  firstLetter_toEnd(s);
  puts(s);
}