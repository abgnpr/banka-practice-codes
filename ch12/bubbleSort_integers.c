#include <stdio.h>
#include <stdlib.h>

// BUBBLE SORT

int main(int argc, char const *argv[])
{
    int i, j , a[5], temp;

    system("clear");
    for (i = 0; i < 5; ++i)
        scanf("%d", a+i);

    for (i = 0; i <= 3; ++i)
        for (j = 0; j <= 3; ++j)
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

    printf("\n");
    for (i = 0; i < 5; ++i)
        printf("%d ", a[i]);
    printf("\n");

    // clearing the input buffer
    while((getchar() != '\n'));
    
    // pause
    getchar();
    return 0;
}
