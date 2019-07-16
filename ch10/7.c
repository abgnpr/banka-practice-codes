#include <stdio.h>
#include <string.h>

/* input a string and print the number
 * of vowels in it. */
int main() {
  char s[50];
  gets(s);
  int vCount = 0;
  for (int i = 0; i < strlen(s); ++i) {
    switch ((int)s[i]) {
      case 'a': 
      case 'e':
      case 'i':
      case 'o':
      case 'u': ++vCount;
      default : ;
    }
  }
  printf("%d", vCount);
}