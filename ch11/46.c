/* Conway's game of life */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    const int N = 5;
    int life[N+2][N+2], newlife[N+2][N+2],
        i, j, m, n,
        liveCells;

    // populating with zeros
    for (i = 0; i < N+2; ++i)
        for (j = 0; j < N+2; ++j) {
                life[i][j] = 0;
                newlife[i][j] = 0;
        }
    
    system("clear");
    printf("\nEnter Life\n\n");

    for (i = 1; i < N+1; ++i)
        for (j = 1; j < N+1; ++j)
            scanf("%d", &life[i][j]);

    for (i = 1; i < N+1; ++i)
        for (j = 1; j < N+1; ++j) {
            
            liveCells = 0;
            for (m = i-1; m <= i+1; ++m)
                for (n = j-1; n <= j+1; ++n)
                    if (!(m==i && n==j) && life[m][n]) 
                        liveCells++;

            newlife[i][j] = (life[i][j])?
                (liveCells==2 || liveCells==3)? 1 : 0:
                (liveCells==3)? 1 : 0;
        }

    printf("\nLook at life now\n\n");
    for (i = 1; i < N+1; ++i) {
        for (j = 1; j < N+1; ++j)
            printf("%d ", newlife[i][j]);
        printf("\n");
    }

    printf("\n");
    getchar();
    getchar();
    return 0;
}
