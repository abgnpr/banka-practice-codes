#include <stdio.h>
#include <string.h>

int main() {
  
  printf("Enter a string: ");
  char s[50];
  gets(s);
  
  int count_A = 0, count_B = 0;
  for (int i = 0; i < strlen(s); ++i) {
    if (s[i] == 'A' || s[i] == 'a')
      ++count_A;
    if (s[i] == 'B' || s[i] == 'B')
      ++count_B;
  }
  
  printf("count of A : %d\n", count_A);
  printf("count of B : %d\n", count_B);

}