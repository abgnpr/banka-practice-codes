/* Program using linked list to generate
 * and print first 10 numbers of the
 * fibonacci series starting from 1 & 1
*/

#include <stdio.h>
#include <stdlib.h>

struct myData
{
    int number;
    struct myData *nextNode;
};

// fibonacci using QUEUE
int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *node,
                  *nodeA, *nodeB;

    nodeA = (struct myData *)calloc(1, sizeof(struct myData));
    nodeA->number = 1;
    nodeB = (struct myData *)calloc(1, sizeof(struct myData));
    nodeB->number = 1;

    START = nodeA;
    nodeA->nextNode = nodeB;
    nodeB->nextNode = NULL;

    for (int i = 1; i <= 8; i++)
    {
        node = (struct myData *)calloc(1, sizeof(struct myData));

        node->number = nodeA->number + nodeB->number;
        node->nextNode = NULL;

        nodeB->nextNode = node;
        nodeA = nodeB;
        nodeB = node;
    }

    for (node = START; node != NULL; node = node->nextNode)
    {
        printf("%d\n", node->number);
    }

    return 0;
}
