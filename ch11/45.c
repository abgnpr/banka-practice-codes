#include <stdio.h>
#include <stdlib.h>

/** MATRIX MULTIPLICATION 
 * Program to create and input numbers
 * in separate 2D arrays and print their
 * product */
int main(int argc, char const *argv[])
{
    const int m = 3, n = 4, p = 5;

    int A[m][n], B[n][p], C[m][p], i, j, k;

    system("clear");

    // input array A (mxn)
    printf("\n\nEnter 1st array [%dx%d]\n\n", m, n);
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &A[i][j]);

    // input array B (nxp)
    printf("\nEnter 2nd array [%dx%d]\n\n", n,p);    
    for (i = 0; i < n; ++i)
        for (j = 0; j < p; ++j)
            scanf("%d", &B[i][j]);

    // nColumns in A = nColumns in B = n. Hence
    // matrix product is defined for A and B

    // C[i][j] = summation[1 to n]( A[i][k]*B[k][j] )
    // where, i = 1,2,...,m and j = 1,2,...,n
    for (i = 0; i < m; ++i)
        for (j = 0; j < p; ++j) {
            C[i][j] = 0;
            for (k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }

    // printing
    printf("\n\nResult\n\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < p; ++j)
            printf("%d\t", C[i][j]);
        printf("\n\n");
    }

    printf("\n\n");
    getchar();
    getchar();
    return 0;
}
