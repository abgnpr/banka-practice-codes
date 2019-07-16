#include <stdio.h>
#include <string.h>

// analysed using gdb
int main() {
  
  
  // DECLARATION
  // char s[]  = "Abhigyan"; // len = 8, chars = 9
  // char s[9] = "Abhigyan"; // len = 8, chars = 9
  // char *s = "Abhigyan\0";
  
  /* note : when we initialize a string like this
   * with 1 extra cell, the string automatically
   * becomes null terminated. In-fact all extra
   * cells are filled with null when the number
   * of cells is more than the number of chars
   * we provide in the string. */ 
  

  // INITIALIZATION
  // char s[100]; // just sets aside space
  // char s[100] = {'\0'};
  /* NOTE : intitializes s to all nulls 
   * ('\000') */
  

  // INPUT

  // Erroneous Input !
  /* using gets after char* s doesn't store
   * anything in s and is probably an error.
   * - as observed in %ERRORLEVEL% */
    // char s[];
    // char* s;
    // gets(s);

  /* Right Way of input */
    // char s[10];
    // scanf("%s", s); // &amperesand not required
    // gets(s);
  /* note : If number of characters entered are
   * more than the specified size, then the char
   * array expands */
  /* note : gets and puts don't add anythin else 
   * besides the the string and a null. */
  
  
  // STRLEN
    // char* s = "Abhigyan"; // len = 8, chars = 9
    // char* s = "Abhigyan\0"; // len = 8, chars = 10
    // char* s = "Abhigyan\0Prakash"; // length = 8
    // char s[0]; // erroneous printing
    // char s[1]; // initialized s to "", len = 0
  /* note : strlen return the number of characters 
   * before '\0' */

  
  // STRCPY
  /* NOTE : STRCPY resets the string and then copies. */
  
  
  // STRING ARRAY
  // char s[/* number of strings */][/* Max length of each string */];

  // PRINTING
  /* note : printing is done upto \0 in both
   * printf and puts */
  
  /* note : doesn't add a newline after printing
   * string s */
    // printf("%s", s);
  
  /* note : puts prints a newline after printing
   * string s */
    // puts(s);

  // printing the last element
    // printf("%d", s[strlen(s)-1]);
  

  return 0;

}
