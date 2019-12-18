#include <stdio.h>
#include <stdlib.h>

/** Program to input price and qty of 25
 * products in a 2D array of appropriate
 * size. Print total cost to be paid for
 * each product using the formula price*
 * quantity. Also print the total cost 
 * for all the 25 products. */
int main(int argc, char const *argv[])
{
    int inv[5][2], i, totalCost = 0;

    system("clear");
    printf("\nProduct\t\tPrice\tQty\n");
    for (i = 0; i < 5; ++i) {
        printf("\n[%d]: \t\t", i+1);
        scanf("%d %d", &inv[i][0], &inv[i][1]);
    }

    system("clear");
    printf("\n\nProduct\t\tPrice\tQty\tTotal\n");
    for (i = 0; i < 5; ++i) {
        totalCost += inv[i][0]*inv[i][1];
        printf(
            "\n[%d]:\t\t%d\t%d\t%d",
            i+1, inv[i][0], inv[i][1],
            inv[i][0]*inv[i][1]
        );
    }

    printf("\n\n\t\tGrand total :\t%d\n\n", totalCost);
    getchar();
    printf("Press any key to exit!");
    getchar();
    
    return 0;
}
