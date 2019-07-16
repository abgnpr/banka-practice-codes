#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/* Input a sentence and print avg
 * characters per word. */
int main() {
  char s[MAXLEN+1];
  gets(s);
  short nC = 0, nW = 0, sum = 0;
  for (short i = 0; i < strlen(s); i++)
  {
    if (s[i] == ' ')
    {
      sum += nC;
      nC = 0;
      ++nW;
    }
    else
    {
      ++nC;
    }
  }
  printf("%0.2lf", (sum*1.0)/nW);
}