#include <stdio.h>

/* Transpose of a matrix */

int main(int argc, char const *argv[])
{
    int a[3][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }

    };

    int b[4][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            b[j][i] = a[i][j];
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
