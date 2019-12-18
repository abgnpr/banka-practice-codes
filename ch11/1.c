#include <stdio.h>

/** Program to input integer data in a 
 * 3 x 4 array and print it back.*/
int main(int argc, char const *argv[])
{
    int a[3][4];
   
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            scanf("%d", &a[i][j]);

    printf("\n");
   
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
