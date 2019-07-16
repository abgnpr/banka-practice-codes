#include <stdio.h>
#include <string.h>

/* input 2 strings and print whether 
 * they are same or different. Also 
 * print which of them is bigger. 
 * Should be case sensitive. */
int main() {
  
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  
  int compareResult = strcmp(s1, s2);
  
  if (compareResult == 0) {
    printf("Strings are same.");
  
  } else {   
    printf("Strings are different and,\n");
    if (compareResult == 1)
      printf("first is bigger than second.");
    else if (compareResult == -1)
      printf("second is bigger than first.");
  }

}