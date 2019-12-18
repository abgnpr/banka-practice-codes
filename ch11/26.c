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

    int modelNo, totalSoldinAWeek = 0;
    printf("\nCheck record\n");
    printf("~~~~~~~~~~~~\n");
    
    printf("\nModel no : ");
    scanf("%d", &modelNo);

    if (modelNo >= 1 && modelNo <= 5) {
        for (int i = 0; i < 7; ++i)
            totalSoldinAWeek += a[modelNo-1][i];
        printf("\nNo. of laptops of model %d sold in a week : %d\n\n", modelNo, totalSoldinAWeek);
    
    } else
        printf("\nWrong input!!!\n\n");
    
    return 0;
}
