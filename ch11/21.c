#include <stdio.h>

/**

1 2 3       7 8 9
4 5 6  -->  4 5 6
7 8 9       1 2 3

*/
int main(int argc, char const *argv[])
{
    int n = 3, i, j, temp;
    int a[n][n];

    printf("Input a %dx%d array\n",n,n);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    for(j = 0; j < n; ++j) {
        temp = a[0][j];
        a[0][j] = a[2][j];
        a[2][j] = temp;
    }

    printf("\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("\t%d", a[i][j]);
        printf("\n");
    }

    return 0;
}