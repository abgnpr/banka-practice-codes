#include <stdio.h>
#include <stdlib.h>

int nD(int n) {
    n = abs(n);
    int nD = 1;
    while ((n/=10) > 0) nD++;
    return nD;
}

/** Program to input integer data in a
 * 4 x 4, 2D array and print it back after
 * converting all odd numbers to even. Add
 * 1 to an odd number to make it even. */
int main(int argc, char const *argv[])
{
    int a[4][4], bigst, foo;
    
    printf("Input a 4x4 array : \n");

    for (int i = 1; i < 4; ++i)
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &a[i][j]);
            (i==1&&j==1)? bigst=a[i][j] : (a[i][j]>bigst)? bigst=a[i][j] : foo++;
        }

    printf("\n\nThe even array : \n");
    
    for (int i = 1; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (a[i][j]%2) a[i][j] += 1;
            for (int k = nD(bigst) - nD(a[i][j]); k>0; --k)
                printf(" ");
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

