#include <stdio.h>

/*

_ x Y  --->  _ Y x
_ x Y        _ Y x
_ x Y        _ Y x

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
            if (j==1)
                b[i][j+1] = a[i][j];
            else if (j==2)
                b[i][j-1] = a[i][j];
            else 
                b[i][j] = a[i][j];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}