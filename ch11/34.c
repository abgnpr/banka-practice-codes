#include <stdio.h>

/* TRANSFER 1D --> 2D */
int main(int argc, char const *argv[])
{
    int a[] = {54,78,87,45,54,566,54,78,54,7,87,87,12,4,54,2,21,54,78,22};

    int b[5][4];

    for (int i = 0, k = 0; i < 5; ++i)
        for (int j = 0; j < 4; ++j)
            b[i][j] = a[k++];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%d\t ", b[i][j]);
        printf("\n\n");
    }

    return 0;
}
