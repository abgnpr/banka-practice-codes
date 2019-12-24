#include <stdio.h>
#include <stdlib.h>

// SELECTION SORT

int main(int argc, char const *argv[])
{
    const int n = 10;

    int i, j, temp, a[n];

    system("clear");
    for (i = 0; i < n; ++i)
        scanf("%d", a + i);

    for (i = 0; i < n - 1; ++i)
    {
        int location = i;
        for (j = i + 1; j < n; ++j)
        {
            if (a[location] > a[j])
            {
                temp = a[j];
                a[j] = a[location];
                a[location] = temp;
            }
        }
    }

    for (i = 0; i < n; ++i)
        printf("%d ", a[i]);

    while ((getchar() != '\n'))
        ;
    getchar();

    return 0;
}
