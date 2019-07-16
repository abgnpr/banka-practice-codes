#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* returns true if 'ch' is a vowel else
 * returns false. */
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

/* shifts all elements on the right of
 * i-th element one place to the left,
 * hence disappearing i-th character 
 * and decreasing the length of s by 1.*/
void shift_in(char s[], int i) {
  while (i < strlen(s)) {
    s[i] = s[i+1];
    ++i;
  }
  return;
}

/* input a string and print it after 
 * removing all consonants from it. */
int main() {

  char s[MAXLEN];
  gets(s);

  for (int i = 0; i < strlen(s); ++i) {
    if (!(isVowel(s[i]))) {
      shift_in(s, i);
      --i;
    }
  }

  if (strcmp(s, "") == 0) {
    printf("<empty string>");
  }
  
  printf("%s", s);

}