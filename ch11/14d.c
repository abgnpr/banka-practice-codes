#include <stdio.h>

/*
find the sum of numbers stored in
locations marked x

 x x x
 x x _
 x _ _

*/

int main(int argc, char const *argv[])
{
    int n = 3, sum = 0;
    int a[n][n];

    printf("\nEnter a %dx%d array: \n\n", n,n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
        
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n-i; ++j)
            sum += a[i][j];

    printf("\nSum : %d\n\n", sum);
    return 0;
}