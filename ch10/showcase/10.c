#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
  switch(ch) {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': return 1;
    default : return 0; 
  }
}

/* to input a string and print the first
 * and the last vowel in it. */
int main() {
  
  char s[50], firstV = '\0', lastV = '\0';
  gets(s);
  
  for (int i = 0; i < strlen(s); ++i) {
    if (isVowel(s[i]) && firstV == '\0') {
      firstV = s[i];
    } else if(isVowel(s[i])) {
      lastV = s[i];
    }
  }
  
  if (firstV != '\0') {
    printf("%c %c", firstV, lastV);
  } else {
    printf("No vowels found.");
  }

}