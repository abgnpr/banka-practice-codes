#include <stdio.h>
#include <string.h>

#define MAXLEN 100


char nextV(char);
int isVowel(char);

/* input a string and print it after
 * replacing each vowel by the next vowel
 * in the same case. */
int main() {

  char s[MAXLEN];
  gets(s);

  for (int i = 0; i < strlen(s); ++i) {
    if (isVowel(s[i])) s[i] = nextV(s[i]);
  }

  puts(s);

}

char nextV(char ch) {
  
  char v[] = {'A', 'a', 'E', 'e', 'I', 'i',
   'O', 'o', 'U', 'u'};
  
  for (int i = 0; i < 10; ++i)
    if (ch == v[i]) return v[(i+2)%10];

}

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
