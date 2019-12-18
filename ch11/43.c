#include <stdio.h>
#include <stdlib.h>

/** 60 students - 5 different subjects
 * print the total marks of all 60 
 * students and also print the subject
 * wise class average.*/
int main(int argc, char const *argv[])
{
    /* we assume an array containing marks
     * of 6 students instead of 60/ */
    int studs[6][5] = {
        // subjects --->
        { 74, 85, 35, 79, 50 },
        { 44, 60, 21, 97, 85 },
        { 75, 98, 55, 36, 65 },
        { 45, 97, 98, 25, 65,},
        { 78, 54, 78, 98, 67 },
        { 67, 87, 75, 46, 68 }
    };

    system("clear");
    printf("\n");

    int subTot[5] = {};
    for (int i = 0, total; i < 6; ++i) {
        total = 0;
        for (int j = 0; j < 5; ++j) {
            total += studs[i][j];
            subTot[j] += studs[i][j];
        }
        printf("\nStudent[%d] : %d", i, total);
    }

    printf("\n");
    for (int i = 0; i < 5; ++i)
        printf("\nAvg marks in sub[%d] : %d", i, subTot[i]/6);

    printf("\n\n");
    getchar();
    return 0;
}
