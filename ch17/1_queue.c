/** Linked list with 5 nodes to store 5
 * integer numbers and print the biggest 
 * among them.
*/

#include <stdio.h>
#include <stdlib.h>

struct myData
{
    int number;
    struct myData *nextNode;
};

int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *node, *prevNode;

    for (int i = 0; i < 5; i++)
    {
        node = (struct myData *)malloc(sizeof(struct myData));

        printf("Enter a number: ");
        scanf("%d", &node->number);

        if (START == NULL)
            START = node;
        else
            prevNode->nextNode = node;

        prevNode = node;
    }

    int biggest = START->number;
    for (node = START->nextNode; node != NULL; node = node->nextNode)
    {
        if (node->number > biggest)
            biggest = node->number;
    }

    printf("Biggest Number : %d\n", biggest);

    return 0;
}
