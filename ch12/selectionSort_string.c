#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// SELECTION SORT on strings

#define N 10
#define NAMELEN 15

int main(int argc, char const *argv[])
{
    int i, j, location;
    char a[N][NAMELEN], temp[NAMELEN];

    for (i = 0; i < N; ++i)
    {
        scanf("%s", a[i]);
    }

    for (i = 0; i < N - 1; ++i)
    {
        location = i;
        for (j = i + 1; j < N; ++j)
        {
            if (strcasecmp(a[location], a[j]) > 0)
            {
                strcpy(temp, a[location]);
                strcpy(a[location], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    // printf("\n");
    for (i = 0; i < N; ++i)
        printf("%s\n", a[i]);

    while (getchar() != '\n')
        ;
    getchar();
    return 0;
}
