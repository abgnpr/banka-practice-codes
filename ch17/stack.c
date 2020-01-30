#include <stdlib.h>
#include <stdio.h>

struct myData
{
    int number;
    struct myData *nextNode;
};

void main(void)
{
    struct myData *START = NULL, *node;

    for (int i = 1; i <= 3; ++i)
    {
        node = (struct myData *) malloc (sizeof(struct myData));

        printf("Enter a number: ");
        scanf("%d", &node->number);

        node->nextNode = START;
        START = node;
    }

    for (node = START; node!=NULL; node = node->nextNode)
        printf("\n%d\n", node->number);
}