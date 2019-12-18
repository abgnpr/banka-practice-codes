#include <stdio.h>
#include <stdlib.h>

/** Program to print the first five rows 
 * of PAscal's traingle, where every 
 * number is sum of two nummbers 
 * diagonally above it, using a 2D array*/
int main(int argc, char const *argv[])
{
    const int p = 8; // layers in pascal's triangle 
    int tri[p][p*2+1], i, j;
    
    for (i = 0; i < p; ++i)
        for (j = 0; j < p*2+1; ++j)
            tri[i][j] = 0;

    tri[0][p] = 1;
    for (i = 1; i < p; ++i)
        for (j = 1; j < 2*p; ++j)
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j+1];
    
    system("clear");
    printf("\n\n");

    // printing
    for (i = 0; i < p; ++i) {
        for (j = 0; j < 2*p+1; ++j)
            if (tri[i][j] != 0)
                printf("%d\t", tri[i][j]);
            else
                printf("\t");
        
        printf("\n\n");
    }

    getchar();
    return 0;
}
