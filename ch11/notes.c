#include <stdio.h>

// Inference drawn from question 4
int main(int argc, char const *argv[])
{
    int a = 1, b = 2, c, d, arr[2][2] = {{10, 20}, {30, 40}};

    ( a > b ) ? printf("%d", a) :  printf("%d", b);

    ( a > b ) ?  a = 3 : b = 4; // An interesting case!!!

    ( a > b ) ?  a = arr[0][0] : b = arr[0][1];
    
    ( a > b ) ?  c = arr[0][0] : d = arr[0][1];

    return 0;

}

// #getchar #inputBuffer #scanf
int main(int argc, char const *argv[])
{
    getchar(); // this works
    
    int n;
    scanf("%d", &n); // scanf leaves a \n in the input buffer
    getchar();// this doesn't work

    // my solution - use getchar() twice
    
    return 0;
}
