#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    x = (int*) calloc (10 , sizeof(int));
    x = (int*) malloc (10 * sizeof(int));

    for (int i = 0; i < 10; ++i)
        *(x+i) = i+1;

    printf("%d\n", *(x+7));

    return 0;
}
