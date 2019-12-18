#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Program to calculate the determinant
 * of a 3x3 matrix.
*/
int main(int argc, char const *argv[])
{
    int 
        i, j, k, m, n, det = 0,
        turnedOff_i, turnedOff_j,
        A[3][3];
    
    system("clear");
    printf("\n\nInput a %dx%d array\n\n",3,3);
    for (i = 0; i < 3; ++i)
        for ( j = 0; j < 3; ++j)
            scanf("%d", &A[i][j]);

    for (k = 0; k < 3; ++k) {

        int P[2][2] = {
            { 0, 0 },
            { 0, 0 }
        };
        
        turnedOff_j = k;
        m = n = 0;

        for (i = 1; i < 3; ++i) {
            for (j = 0; j < 3; ++j)
                if (j != turnedOff_j)
                    P[m][n++] = A[i][j];
            if (n == 2) { // could be simplified
                m = 1;    // using a 1D array
                n = 0;
            }
        }

        det +=  (int)pow(-1,k) * A[0][k] * (P[0][0]*P[1][1] - P[0][1]*P[1][0]);
    }

    printf("\nDeterminant = %d\n", det);
    getchar(); getchar();
    return 0;
}
