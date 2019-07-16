#include <stdio.h>

int main() {
  char arr[5], arr1[10];
  
  /* to input a word */
  scanf("%s", arr/* watch no amperesand required */);
  // problems occur in printing arr if
  // string entered in arr is more than
  // 4 charaters.
  
  /* to input a sentence */
  gets(arr1);
  // problem with gets input here!

  printf("%s\n%s", arr, arr1);
}