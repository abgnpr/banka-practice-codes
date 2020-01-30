#include <stdio.h>
#include <stdlib.h>

#define ERR_COLOR "\x1b[31m"
#define RESET_COLOR "\x1b[0m"

struct myData
{
    int number;
    struct myData *nextNode, *prevNode;
};

/* Insertions and deletions from a doubly
 * linked list. */
int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *END = NULL, *node;

    for (int i = 1; i <= 5; ++i)
    {
        node = (struct myData *)malloc(sizeof(struct myData));
        node->number = i;
        node->nextNode = NULL;
        node->prevNode = NULL;

        if (START == NULL)
            START = node;
        else
        {
            node->prevNode = END;
            END->nextNode = node;
        }

        END = node;
    }

    // new node
    node = (struct myData *)malloc(sizeof(struct myData));
    node->number = 256;
    node->nextNode = NULL;
    node->prevNode = NULL;

    // INSERT

    // Insertion at beginning
    // node->nextNode = START;
    // node->prevNode = START->prevNode;
    // START->prevNode = node;
    // START = node;

    // Insertion at end
    // node->prevNode = END;
    // node->nextNode = END->nextNode;
    // END->nextNode = node;
    // END = node;

    // Insertion in the middle

    int insLoc;
    printf("\n\nInsert after ... nth node : ");
    scanf("%d", &insLoc);

    struct myData *nodeA = START, *nodeB;
    if (insLoc >= 0 && insLoc <= 5)
    {
        if (insLoc == 0)
        {
            nodeA = NULL;
            nodeB = START;
            START = node;
        }
        else
        {
            int i = 1;
            while (i++ < insLoc)
                nodeA = nodeA->nextNode;
            nodeB = nodeA->nextNode;
            nodeA->nextNode = node;
        }

        node->prevNode = nodeA;
        node->nextNode = nodeB;

        if (nodeB)
            nodeB->prevNode = node;
        else
            END = node;
    }
    else
        printf(ERR_COLOR"\nInvalid insert location"RESET_COLOR);

    printf("\n\nQueue\n\n");
    for (node = START; node != NULL; node = node->nextNode)
    {
        printf("%d\n", node->number);
    }

    printf("\n\nStack\n\n");
    for (node = END; node != NULL; node = node->prevNode)
    {
        printf("%d\n", node->number);
    }

    printf("\n\n");
    return 0;
}