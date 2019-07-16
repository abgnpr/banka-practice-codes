#include <stdio.h>

/* main : prints the number of times char 
 * 'i' occurs in 'University. */
int main() {
  // a charcacter array of size 11 is created
  char s[] =  "University";
  
  int countOf_i = 0;
  for (int i = 0; i < 10; ++i) {
    if (s[i] == 'i') ++countOf_i;
  }
  printf("nOccurences : %d", countOf_i);
  return 0;
}