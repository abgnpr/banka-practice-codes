#include <stdio.h>

/** check if both the diagonals are mirror
 * images */
int main(int argc, char const *argv[])
{
    int n;
    printf("\nCheck if the diagonals in a matrix are mirror images.!\n");

    printf("\nEnter dimension[n] : ");
    scanf("%d", &n);
    
    int a[n][n];

    printf("\nEnter a %dx%d array: \n\n", n,n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    int isMirror = 1;
    for (int i = 0; i < n && isMirror; ++i)
        if (a[i][i] != a[i][n-1-i]) isMirror = 0;
    isMirror? printf("\nYES\n\n") : printf("\nNO\n\n");

    return 0;
}
