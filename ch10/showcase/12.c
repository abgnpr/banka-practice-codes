#include <stdio.h>
#include <string.h>

/* Input a sentence and print if the
 * number of words in it are EVEN or ODD */
int main() {
  
  char s[100];
  gets(s);
  
  int i = 0, nWords = 0, l = strlen(s);
  
  // skipping spaces in the beginning
  while (s[i] == ' ') ++i;
  
  // if there are non-space characters
  // left after removing starting spaces
  if (i != l) nWords = 1; 
  
  // count the number of words
  for (; i < l; ++i) {
    if (s[i] == ' ' && s[i+1] != ' ')
      ++nWords;
  }
  
  printf(" %d\n", nWords);
  
  (nWords%2)? printf("ODD") : printf("EVEN");
  
  return 0;

}
