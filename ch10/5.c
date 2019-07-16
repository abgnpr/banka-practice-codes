#include <stdio.h>
#include <string.h>

/* input a string and print the number 
 * of times the charactera 'A' and 'Z'
 * occur in it. (check for both upper
 * and lower case. */
int main() {

  printf("Enter a string: ");
  char s[50];
  // size here is important.
  gets(s);
  int count = 0;
  for (int i = 0; i < strlen(s); ++i)
    if (s[i] == 'A' || s[i] == 'a'
    ||  s[i] == 'Z' || s[i] == 'z')
      ++count;
  printf("count : %d", count);

}