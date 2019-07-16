#include <stdio.h>
#include <string.h>

/* input a string and print the number 
 * of times space ' ' occurs in it. */
int main() {

  printf("Enter a string: ");
  char s[50]; // size here is important.
  gets(s);
  
  int countOf_spaces = 0;
  for (int i = 0; i < strlen(s); ++i)
    if (s[i] == ' ') ++countOf_spaces;
  
  printf("count of spaces : %d", countOf_spaces);

}