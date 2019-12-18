#include <stdio.h>

/** Transpose of a square matrix without
 * using a second matrtix */
int main(int argc, char const *argv[])
{
    int temp, a[4][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }

    };

    for (int i = 0; i < 4; ++i)
        for (int j = i+1; j < 4; ++j) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("\t%d", a[i][j]);
        printf("\n");
    }


    return 0;
}
