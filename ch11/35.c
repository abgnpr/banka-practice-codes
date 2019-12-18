#include <stdio.h>

/* TRANSFER 2D --> 1D */
int main(int argc, char const *argv[])
{
    int a[5][4] = {

        { 54, 78, 87, 45 },
        { 54,566, 54, 78 },
        { 54,  7, 87, 87 },
        { 12,  4, 54,  2 },
        { 21, 54, 78, 22 }

    };

    int b[20];

    int  k = 0;

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 4; ++j)
            b[k++] = a[i][j];

    printf("\n");
    while(--k >= 0) printf("%d ", b[20-1-k]);
    printf("\n\n");

    return 0;
}
