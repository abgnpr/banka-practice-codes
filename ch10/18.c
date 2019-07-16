#include <stdio.h>
#include <string.h>

#define MAXLEN 100

int isVowel(char ch) {
  switch(ch) {
    case 'a':  case 'A': 
    case 'e':  case 'E': 
    case 'i':  case 'I': 
    case 'o':  case 'O': 
    case 'u':  case 'U': 
    return 1;
    
    default : return 0; 
  }
}

/* input a string and separate the vowels
 * and consonants in it in 2 different 
 * strings and print them. */
int main() {
  
  char s[MAXLEN], 
       v[MAXLEN] = {'\0'}, 
       c[MAXLEN] = {'\0'};
  
  gets(s);
  
  for (int i = 0; i < strlen(s); ++i) {
    if (isVowel(s[i])) {
      v[strlen(v)] = s[i];
    } else {
      c[strlen(c)] = s[i];
    }
  }

  puts(c);
  puts(v);
  
  return 0;

}
