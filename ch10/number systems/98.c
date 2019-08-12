#include <stdio.h>
#include <stdlib.h>

size_t strlen(char *str) {
    size_t i;
    for (i = 0; *(str+i)!='\0'; ++i)
        ;
    return i;
}

void strrev(char str[]) {
    int i, len = strlen(str);
    for (i = 0; i < len/2; ++i) {
        char t = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = t;
    }
}

char* bin(int n) {
    static char binary[50] = "";
    int i = 0;
    do {
        if (n%2 == 0)
            binary[i++] = '0';
        else
            binary[i++] = '1';
    } while ((n/=2) != 0);
    binary[i] = '\0';
    strrev(binary);
    return binary;
}

// input a decimal number and print its
// equivalent binary number.
int main(int argc, char const *argv[]) {
    for (int i = 1; i < argc; ++i)
        printf("%s\n", bin(atoi(argv[i])));
    return 0;
}