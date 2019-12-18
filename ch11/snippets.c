    
// an array
    
    int a[][3] = {
        
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
   
    };

    int a[3][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }

    };

    int a[4][4] = {

        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }

    };




    int i, j, n = 3;
    int a[n][n];
    
    printf("Input a %dx%d array : \n",n,n);

    for (i = 0; i < n; ++i)
        for ( j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);



    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            printf("%d\t ", b[i][j]);
        printf("\n\n");
    }



#include <stdio.h>

/**

1 2 3       9 8 7
4 5 6  -->  6 5 4
7 8 9       3 2 1

*/
int main(int argc, char const *argv[])
{
    int n = 3, i, j;
    int a[n][n], b[n][n];

    printf("Input a %dx%d array : \n",n,n);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            

    printf("\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%d\t", b[i][j]);
        printf("\n");
    }

    return 0;
}