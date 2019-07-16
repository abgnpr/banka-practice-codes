#include <stdio.h>
#include <string.h>

/* input a string and print the number 
 * of times the character 'u' or 'U'
 * occurs in it. */
int main() {

  printf("Enter a string: ");
  char s[50];
  // size here is important.
  gets(s);
  puts(s);
  int countOf_uU = 0;
  for (int i = 0; i < strlen(s); ++i)
    if (s[i] == 'u' || s[i] == 'U')
      ++countOf_uU;
  printf("count of 'u' and 'U' : %d", countOf_uU);

}