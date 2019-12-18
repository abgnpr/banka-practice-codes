#include <stdio.h>

/* check if the given number is prime or not*/
int isprime(int N) {
    if (N==0 || N==1) return 0;
    int n = 2;
    while (n<=N/2) if (!(N%n++)) return 0;
    return 1;
}

/** Program to create a 3x3, 2D array and
 * fill all its variables with first nine
 * prime numbers startting from 23. */
int main(int argc, char const *argv[])
{
    int a[3][3], primes[9], n = 23, i=0, j=0, k=0;

    while(k < 9) {
        if(isprime(n)) primes[k++] = n;
        n += 1;
    }

    k = 0;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            a[i][j] = primes[k++];

    printf("\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%d\t ", a[i][j]);
        printf("\n\n");
    }

    return 0;
}