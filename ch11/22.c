
#include <stdio.h>

/**

1 2 3       7 1 4
4 5 6  -->  8 2 5
7 8 9       9 3 6

*/
int main(int argc, char const *argv[])
{
    int n = 3, i, j;
    int a[n][n], temp;

    printf("Input a %dx%d array : \n",n,n);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; ++i) {
        temp = a[0][i];
        a[0][i] = a[2][i];
        a[2][i] = temp;
    }

    for (i = 0; i < n; ++i) {
        temp = a[1][i];
        a[1][i] = a[2][i];
        a[2][i] = temp;
    }

    for (i = 0; i < n; ++i)
        for (j = i+1; j < n; ++j) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }

    printf("\n\nResult\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%d\t", a[i][j]);
        printf("\n\n");
    }

    return 0;
}