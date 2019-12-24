#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// LINEAR SEARCH

#define NOT_FOUND -1
#define MAXNAMELEN 10

int main(int argc, char const *argv[])
{
    int i;
    char a[5][MAXNAMELEN];

    system("clear");

    for (i = 0; i < 5; ++i)
        gets(a[i]);
        // scanf("%s", a[i]);

    int loc = NOT_FOUND;
    char n[MAXNAMELEN];
    printf("\n"); gets(n); 
    /* scanf("%s", n); */

    for (i = 0; i < 5 && loc==NOT_FOUND; ++i) 
        if (strcasecmp(a[i], n)==0) loc = i;

    (loc==NOT_FOUND)?
        printf("NOT_FOUND\n"):
        printf("%d\n", loc);

    printf("\n");
    getchar();
    return 0;
}