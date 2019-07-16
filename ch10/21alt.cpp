#include <cstdio>
#include <string.h>
using namespace std;

#define MAXLEN 100

/* Input a string and print it after 
 * reversing it.
 * use strrev() from <string.h> */
int main() {
  
  char s[MAXLEN];

  gets(s);
  strrev(s);

  printf("%s", s);

}