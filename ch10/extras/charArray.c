#include <stdio.h>

int main() {

  char f[] = "World",
       g[6]= "World";

  printf("%s\n", f);
  printf("%s\n", g);
  
  char a[] = {'W','o', 'r', 'l', 'd'}, // watch the error in
       b[5] = {'W','o', 'r', 'l', 'd'},// these two cases.
       c[6] = {'W','o', 'r', 'l', 'd'},
       d[6] = {'W','o', 'r', 'l', 'd', '\0'},
       e[] = {'W','o', 'r', 'l', 'd', '\0'}; 

  printf("%s\n", a);
  printf("%s\n", b);
  printf("%s\n", c);
  printf("%s\n", d);
  printf("%s\n", e);

}