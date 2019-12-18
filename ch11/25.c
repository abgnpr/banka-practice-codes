#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5][7] = {

    //  week days -------->
        {  1,  2,  3,  4,  5,  6,  7 }, // Models 
        {  8,  9, 10, 11, 12, 13, 14 }, //  |
        { 15, 16, 17, 18, 19, 20, 21 }, //  |
        { 22, 23, 24, 25, 26, 27, 28 }, //  V
        { 29, 30, 31, 32, 33, 34, 35 }

    };

    int modelNo, dayOfWeek;
    printf("\nCheck record\n");
    printf("~~~~~~~~~~~~\n");
    
    printf("\nModel no : ");
    scanf("%d", &modelNo);
    printf("\nWeek day : ");
    scanf("%d", &dayOfWeek);
    
    if ((modelNo >= 1 && modelNo <= 5) && (dayOfWeek >= 1 && dayOfWeek <= 7))
        printf("\nNo. of laptops sold : %d\n\n", a[modelNo-1][dayOfWeek-1]);
    else
        printf("\nWrong input!!!\n\n");
    
    return 0;
}
