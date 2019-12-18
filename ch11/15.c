#include <stdio.h>

/*

x _ Y        Y _ x
x _ Y  --->  Y _ x
x _ Y        Y _ x

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
            b[i][2-j] = a[i][j]; // column swap

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}