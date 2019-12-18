#include <stdio.h>

/** Program to input numbers in a 3x4
 * 2D array and print the smallest number
 * in the array together with its row
 * and column index.*/
int main(int argc, char const *argv[])
{
    
    int i, j, I, J, m = 3, n = 4;
    int a[m][n];
    
    printf("\nInput a %dx%d array\n\n", m, n);

    for (i = 0; i < m; ++i)
        for ( j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    I = J = 0;
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            if (a[i][j]<a[I][J]) {
                I = i;
                J = j;
            }
    
    printf("\nSmallest : %d at (%d,%d)\n\n", a[I][J], I, J);
    return 0;
}
