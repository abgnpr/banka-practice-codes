#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// BUBBLE SORT on strings

#define N 10

int main(int argc, char const *argv[])
{
    int i, j, nSwaps;

    char a[10][N], temp[10];
    system("clear");
    for (i = 0; i < N; ++i)
        scanf("%s", a[i]);

    for (i = 0; i < N - 1; ++i)
    {
        nSwaps = 0;
        for (j = 0; j < N - 1 - i; ++j)
        {
            if (strcasecmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
                nSwaps++;
            }
        }
        if (nSwaps == 0)
            break;
    }

    printf("\n");
    for (i = 0; i < N; ++i)
        printf("%s\n", a[i]);

    while (getchar() != '\n')
        ;
    getchar();
    return 0;
}
