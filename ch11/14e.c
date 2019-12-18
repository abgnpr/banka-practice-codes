#include <stdio.h>

/*
find the sum of numbers stored in
locations marked x

 x _ x
 _ x _
 x _ x

*/

int main(int argc, char const *argv[])
{
    int n = 3, sum = 0;
    int a[n][n];

    printf("\nEnter a %dx%d array: \n\n", n,n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
        
    for (int i = 0; i < n; ++i) {
        sum += a[i][i];
        if (i!=1) sum += a[i][2-i];
    }
    printf("\nSum : %d\n\n", sum);
    return 0;
}