#include <stdio.h>

/*

x Y _  --->  Y x _
x Y _        Y x _
x Y _        Y x _

*/

int main(int argc, char const *argv[])
{
    int a[][3] = {

        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }

    };

    int b[3][3];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (j==0 || j==1)
                b[i][1-j] = a[i][j]; // column swap
            else 
                b[i][j] = a[i][j];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}