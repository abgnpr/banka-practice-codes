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
  
  char s[MAXLEN], newS[MAXLEN] = {'\0'};
  gets(s);

  short len, i, j;
  
  for (i = strlen(s)-1, j = -1; i >= 0; --i)
    if(!(isVowel(s[i]))) newS[++j] = s[i];

  puts(newS);

}