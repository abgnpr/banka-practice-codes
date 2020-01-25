#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *a;
    float *b;
    char *c;
    int arr1[10];
    char arr2[10] = {'a'};

    long x = 10;
    float y = 15.5f;
    char z = 'a';

    a = &x;
    b = &y;
    c = &z;

    // primitve types
    printf("%d %d\n", x, sizeof(x));
    printf("%p %d\n", a, sizeof(a));
    printf("\n");
    printf("%0.2f %d\n", y, sizeof(y));
    printf("%p %d\n", b, sizeof(b));
    printf("\n");
    printf("%c %d\n", z, sizeof(z));
    printf("%p %d\n", c, sizeof(c));
    printf("\n");

    printf("%d %d\n", arr1, sizeof(arr1[0]));
    printf("%p %d\n", arr1, sizeof(arr1));
    printf("\n");
    printf("%c %d\n", arr2[0], sizeof(arr2[0]));
    printf("%p %d\n", arr2, sizeof(arr2));
    printf("\n");

    return 0;
    
}
