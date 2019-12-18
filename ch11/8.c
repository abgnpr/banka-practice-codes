#include <stdio.h>

/** Program to input int data in a 3x3
 * 2D matrix and print the sum of all 
 * the numbers stored in both diagonals
 * in it.*/
int main(int argc, char const *argv[])
{
    int a[3][3], s = 0;
    
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d", &a[i][j]);
    
    for (int i = 0; i < 3; ++i) {
        s += a[i][i];
        if (i!=1) s += a[i][2-i];
    }

    printf("\nSum of left and right diagonals: %d\n", s);
    return 0;
}
