#include <stdio.h>
#include <string.h>

/* print the number of times individual
 * vowels occur in a string s */
int main() {
  char s[50];
  gets(s);
  int a, e, i, o, u;
  a = e = i = o = u = 0;
  for(int  it = 0; it <= strlen(s); ++it) {
    switch (s[it]) {
      case 'a': 
      case 'A': ++a; break;
      case 'e':
      case 'E': ++e; break;
      case 'i':
      case 'I': ++i; break;
      case 'o':
      case 'O': ++o; break;
      case 'u':
      case 'U': ++u; break;
    }
  }
  printf("%d %d %d %d %d", a, e, i, o, u);
}