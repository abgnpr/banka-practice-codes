#include <stdio.h>
#include <string.h>

#define IN  1
#define OUT 0

/* input a string and print the number 
 * of words in it. */
int main() {
  
  char s[50];
  gets(s);
  
  int nWords = 0, status = OUT;
  if (s[0] != '\n') nWords = 1;
  
  for (int i = 0; i < strlen(s)-1; ++i) {
    if (status==OUT && s[i]!=' ') status = IN;
    if (status==IN && s[i]==' ' && s[i+1]!=' ')
      ++nWords;
  }
  
  printf("%d", nWords);

}

// see no. 12 for a more efficient solution.
