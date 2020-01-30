// DELETING A NODE FROM MID

#include <stdio.h>
#include <stdlib.h>

struct myData
{
    int number;
    struct myData *nextNode;
};

int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *node, *newNode, *needle, *temp;

    /* -------- A stack with 10 nodes -------- */
    for (int i = 1; i <= 10; ++i)
    {
        node = (struct myData *)malloc(sizeof(struct myData));

        node->number = i;
        node->nextNode = START;

        START = node;
    }
    /* --------------------------------------- */

    int nodeNumber;
    printf("Enter node number: ");
    scanf("%d", &nodeNumber);

    needle = START;
    if (nodeNumber >= 1 && nodeNumber <= 10)
    {
        // locating the node
        for (int i = 1; i < nodeNumber-1; ++i)
            needle = needle->nextNode;

        // deleting in the middle
        if (nodeNumber == 1) {
            START = START->nextNode;
            free(needle);
        }
        else
        {
            temp = needle->nextNode;
            needle->nextNode = needle->nextNode->nextNode;
            free(temp);
        }
    }
    else
        printf("Node not found! No deletions\n");

    // printing the data
    for (node = START; node != NULL; node = node->nextNode)
        printf("%d\n", node->number);

    return 0;

    return 0;
}
