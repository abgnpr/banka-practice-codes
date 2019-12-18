#include <stdio.h>

/* Sum of two matrices */
int main(int argc, char const *argv[])
{

    int i, j, n = 3;
    int a[n][n], b[n][n], c[n][n];
    
    printf("\nInput a %dx%d array\n\n", n, n);
    for (i = 0; i < n; ++i)
        for ( j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    
    printf("\nInput another %dx%d array\n\n", n, n);
    for (i = 0; i < n; ++i)
        for ( j = 0; j < n; ++j)
            scanf("%d", &b[i][j]);
    
    printf("\n");
    for (i = 0; i < n; ++i)
        for ( j = 0; j < n; ++j)
            c[i][j] = a[i][j] + b[i][j];

    printf("\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            printf("%d\t", c[i][j]);
        printf("\n\n");
    }

    return 0;
}
