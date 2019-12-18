#include <stdio.h>

int isPrime(int N) {
    if (N==0 || N==1) return 0;
    int n = 2;
    while (n<=N/2) if (!(N%n++)) return 0;
    return 1;
}

/** Print those numbers where the sum of
 * row and column index of the variable
 * is prime */
int main(int argc, char const *argv[])
{
    int a[8][8] = {

        { 15, 16, 17, 18, 19, 20, 21, 75 },
        { 22, 23, 24, 25, 26, 27, 28, 48 },
        { 29, 30, 31, 32, 33, 34, 35, 21 },
        {  8,  9, 10, 11, 12, 13, 14, 98 },
        {  1,  2,  3,  4,  5,  6,  7, 12 }, 
        { 22, 23, 24, 25, 26, 27, 28, 21 },
        {  1,  2,  3,  4,  5,  6,  7, 87 }, 
        { 29, 30, 31, 32, 33, 34, 35, 45 }

    };

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j)
            if (isPrime(i+j))
                printf("%d\t", a[i][j]);
            else
                printf("\t");
        printf("\n");
    }

    return 0;
}
