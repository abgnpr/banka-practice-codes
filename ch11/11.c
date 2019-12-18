#include <stdio.h>

/** Program to input data in a n x n 2D
 * array and print it after interchaning
 * the values of the left diagonal with 
 * that of values in the right diagonal.*/
int main(int argc, char const *argv[])
{
    int n, temp;

    // input dimesion
    printf("Enter dimension[n] : ");
    scanf("%d", &n);
    
    int a[n][n];

    // input array
    printf("\nEnter a %dx%d array: \n\n", n,n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; ++i) {
        temp = a[i][i];
        a[i][i] = a[i][n-1-i];
        a[i][n-1-i] = temp;
    }

    printf("\nThe array with its diagonals interchanged : \n\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\n");
    return 0;
}
