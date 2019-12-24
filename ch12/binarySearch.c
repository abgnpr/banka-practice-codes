#include <stdio.h>

#define NOT_FOUND -1

// BINARY SEARCH

int main(int argc, char const *argv[])
{
    int i, a[] = {1,2,3,4,5,6,7,8,9,10};

    int n, loc = NOT_FOUND;

    scanf("%d", &n);

    int start = 0, end = 9, mid;

    while ( start <= end && loc==NOT_FOUND ) {
        
        mid = (start+end)/2;
        
        if (n == a[mid]) {
            loc = mid;

        } else if (n > a[mid]) {
            start = mid + 1;

        } else {
            end = mid -1;

        }
    }

    (loc!=NOT_FOUND)? printf("%d\n", loc) : printf("Not found");

    getchar(); getchar();
    return 0;
}
