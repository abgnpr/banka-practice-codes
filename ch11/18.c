#include <stdio.h>

/** Check if the given matrix is 
 * symmetric or not. */
int main(int argc, char const *argv[])
{
    int i, j, temp;

    int 
        A[4][4],   // inputted array A
        At[4][4];  // transpose of A
    
    printf("Input a 4x4 array : \n\n");

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
            At[i][j] = A[j][i];

    int isSymm = 1;
    for (i = 0; i < 4 && isSymm; ++i)
        for (j = 0; j < 4 && isSymm; ++j)
            if (A[i][j] != At[i][j]) isSymm = 0;

    isSymm? printf("\nYES\n\n") : printf("\nNO\n\n");
    return 0;
}
