#include <stdio.h>

/** Program to create a 3x4, 2D array
 * and print sum of numbers in each row,
 * separately. */
int main(int argc, char const *argv[])
{
    int a[3][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }

    };
    
    for (int i = 0, sum; i < 3; ++i) {
        sum = 0;
        for (int j = 0; j < 4; ++j) {
            sum += a[i][j];
        }
        printf("\nSum of row[%d] : %d\n", i, sum);
    }
    
    printf("\n\n");
    return 0;
}
