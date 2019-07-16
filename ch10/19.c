#include <stdio.h>
#include <string.h>

#define MAXLEN 100

struct line
{
  int nS;
  int nC;
  char s[MAXLEN];
};

/* Input a string and print the number of
characters and number of spaces in it.*/
int main(int argc, char const *argv[])
{
  struct line myline;
  
  gets(myline.s);

  myline.nS = 0;
  myline.nC = 0;

  for (short i = 0; i < strlen(myline.s); i++)
  {
    if (myline.s[i] == ' ')
    {
      ++myline.nS;
    }
    else
    {
      ++myline.nC;
    }
  }

  printf("%d %d", myline.nS, myline.nC);
  
  return 0;
}
