#include <string.h>
#include <stdio.h>

/* `strstr()` analysis */
int main() {

    // char
    //     *s = "Abhigyan ",
    //     *f = " ";
    
    // char* pos = strstr(s,f);
    // printf("%s  %ld\n", pos, pos-s);

    char *s = "rari ";
    char *pos = strstr(s+5," ");

    printf("%s  %ld\n", pos, pos-s);

}
