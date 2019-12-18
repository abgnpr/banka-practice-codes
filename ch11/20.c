#include <stdio.h>

/**

1 2 3       7 4 1 
4 5 6  -->  8 5 2
7 8 9       9 6 3

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
            b[i][j] = a[j][i];

    for (i = 0; i < n; ++i) {
        int temp = b[i][0];
        b[i][0] = b[i][2];
        b[i][2] = temp;
    }

    printf("\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}