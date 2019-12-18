#include <stdio.h>
#include <stdlib.h>

/** program to create a 3x4 array and
 * print the sum of numbers in each
 * column, separately.*/
int main(int argc, char const *argv[])
{
    int a[3][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }

    };

    system("clear");

    for (int i = 0, sum; i < 4; ++i) {
        sum = 0;
        for (int j = 0; j < 3; ++j)
            sum += a[j][i];
        printf("\nSum of col[%d] = %d\n", i, sum);
    }

    getchar();
    return 0;
}
