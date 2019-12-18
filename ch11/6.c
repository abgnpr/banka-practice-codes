#include <stdio.h>

/** Input integer data in a 4x4 2D array
 * and print the sum of numbers in the
 * third column */
int main(int argc, char const *argv[])
{
    int a[4][4], sum = 0;
    
    printf("Input a 4x4 array : \n");

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            scanf("%d", &a[i][j]);
    
    for (int i = 0; i < 4; ++i)
        sum+= a[i][2];

    printf("Sum : %d\n", sum);
    return 0;
}