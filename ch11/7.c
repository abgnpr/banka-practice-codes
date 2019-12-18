#include <stdio.h>

/** Program to input integer data in a
 * 3x3, two dimensionsal array and print
 * the sum of all the numbers stored in
 * left and right diagonals(separately)
 * in it.*/
int main(int argc, char const *argv[])
{
    int a[3][3], sLD = 0, sRD = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d", &a[i][j]);
    
    for (int i = 0; i < 3; ++i) {
        sLD += a[i][i];
        sRD += a[i][2-i];
    }

    printf("\nSums:\nLeft Diagonal: %d\nRight Diagonal: %d\n\n", sLD, sRD);
    return 0;
}
