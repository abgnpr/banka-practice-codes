#include <stdio.h>
#include <string.h>

#define MAXLEN 100

int isVowel(char ch) {
  switch(ch) {
    case 'a': 
    case 'A': 
    case 'e': 
    case 'E': 
    case 'i': 
    case 'I': 
    case 'o': 
    case 'O': 
    case 'u': 
    case 'U': return 1;
    default : return 0; 
  }
}


/* input a string and print it after 
 * removing all vowels from it. */
int main() {

  char s[MAXLEN];
  gets(s);
  
  short int len = strlen(s), j;
  for (int i = 0; i < len; ++i) {
    if (isVowel(s[i])) {
      for (j = i; j < len-1; ++j) {
        s[j] = s[j+1];
      }
      s[j] = '\0';
    }
  }
  
  printf("%s", s);

}