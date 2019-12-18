#include <stdio.h>

/** Program to check if the given matrix
 * is a unit matrix or not.*/
int main(int argc, char const *argv[])
{
    int n;
    printf("\nCheck if a matrix is a Unit Matrix!\n");

    printf("\nEnter dimension[n] : ");
    scanf("%d", &n);
    
    int a[n][n];

    printf("\nEnter a %dx%d array: \n\n", n,n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    int isUnitMat = 1;

    for (int i = 0; i < n && isUnitMat; ++i)
        for (int j = 0; j < n && isUnitMat; ++j) {
            if (i==j)
                if (a[i][j]!=1)
                    isUnitMat = 0;
                else continue;
            else if (a[i][j]!=0) 
                isUnitMat = 0;
        }

    isUnitMat? printf("\nYES\n\n") : printf("\nNO\n\n");
    return 0;

}