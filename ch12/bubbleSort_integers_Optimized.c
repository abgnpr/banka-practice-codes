#include <stdio.h>
#include <stdlib.h>

// BUBBLE SORT (optimized)

int main(int argc, char const *argv[])
{
    // sorting to be done for
    const int n = 5;

    int i, j, nSwaps, a[n], temp;

    system("clear");
    for (i = 0; i < n; ++i)
        scanf("%d", a+i);

    for (i = 0; i < n-1; ++i) {
        nSwaps = 0; /* Optzn #1 */
        for (j = 0; j < n-1-i /* Optzn #2 */; ++j) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                nSwaps++;
            }
            if (nSwaps == 0) break;
        }
    }

    printf("\n");
    for (i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");

    // clearing the input buffer
    while((getchar() != '\n'));
    
    // pause
    getchar();
    return 0;
}
