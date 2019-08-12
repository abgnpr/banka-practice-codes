#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

// pig latin Question 92
void main(void)
{

  char
    s[MAXLEN + 2],
    new_S[MAXLEN + 2] = {'\0'},
    vowels[] = "aeiouAEIOU";

  fgets(s, MAXLEN + 2, stdin);
  s[strlen(s) - 1] = '\n';

  int i = 0, j, k, len = strlen(s);
  for (j = 0; j < len; ++j)
    if (isspace(s[j]))
    {
      if (j == i)
        strncat(new_S, s + j, 1);

      else
      {

        for (k = i; k < j; k++)
          if (strchr(vowels, *(s + k)) != NULL)
            break;

        if (k < j)
        {
          strncat(new_S, s + k, j - k);
          strncat(new_S, s + i, k - i);
          strcat(new_S, "ay");
        }
        else
          strncat(new_S, s + i, j - i);

        strncat(new_S, s + j, 1);
      }

      i = j + 1;
    }

  printf("%s\n", new_S);
}