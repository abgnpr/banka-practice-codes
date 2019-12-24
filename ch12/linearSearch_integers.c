#include <stdio.h>

// LINEAR SEARCH

#define NOT_FOUND -1

int main(int argc, char const *argv[])
{
    int i, a[5];

    for (i = 0; i < 5; ++i)
        scanf("%d ", &a[i]);

    int n, loc = NOT_FOUND;
    scanf("%d", &n);

    for (i = 0; i < 5 && loc==NOT_FOUND; ++i) 
        if (a[i] == n) loc = i;

    (loc==NOT_FOUND)?
        printf("NOT_FOUND\n"):
        printf("%d\n", loc);

    return 0;
}
