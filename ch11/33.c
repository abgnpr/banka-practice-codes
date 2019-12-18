#include <stdio.h>

/** LOWER TRIANGULAR MATRIX
 * Program to obtain in separate array
 * a lower traingular matrix from an
 * existing matrix of size size 6x6.*/
int main(int argc, char const *argv[])
{
    int a[6][6] = {
        
        {  1,  2,  3,  4,  5,  6 },
        {  7,  8,  9, 10, 11, 12 },
        { 13, 14, 15, 16, 17, 18 },
        { 19, 20, 21, 22, 23, 24 },
        { 25, 26, 27, 28, 29, 30 },
        { 31, 32, 33, 34, 35, 36 }
    
    };

    int i, j;
    
    for (i = 0; i < 6; ++i)
        for (j = 0; j < 6; ++j)
            // To obtain lower triangular matrix
            if (i < j) a[i][j] = 0;
            // To obtain upper triangular matrix
            // if (i > j) a[i][j] = 0;

    for (i = 0; i < 6; ++i) {
        for (j = 0; j < 6; ++j)
            printf("%d\t ", a[i][j]);
        printf("\n\n");
    }

    return 0;
}
