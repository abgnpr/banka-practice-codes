#include <stdio.h>

/**

1 2 3       9 8 7
4 5 6  -->  6 5 4
7 8 9       3 2 1

*/
int main(int argc, char const *argv[])
{
    int n = 3, i, j;
    int a[n][n], b[n][n];

    printf("Input a %dx%d array : \n",n,n);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            b[i][j] = a[n-1-i][n-1-j];

    printf("\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
