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

    // DELETE

    struct myData *temp;

    // Deletion from beginning
    // temp = START;
    // START = START->nextNode;
    // START->prevNode = temp->prevNode;
    // free(temp);

    // Deletion from end
    // temp = END;
    // END->prevNode->nextNode = NULL;
    // END = END->prevNode;
    // free(temp);

    // Deletion from the middle

    int insLoc;
    printf("\n\nDelete nth node : ");
    scanf("%d", &insLoc);

    struct myData *nodeA, *nodeB;

    if (insLoc >= 1 && insLoc <= 5)
    {
        int i = 1;
        node = START;
        while (i++ < insLoc)
            node = node->nextNode;

        if (node == START)
        {   
            node->nextNode->prevNode = NULL;
            START = node->nextNode;
        }
        else if (node == END)
        {
            node->prevNode->nextNode = NULL;
            END = node->prevNode;
        }
        else
        {
            node->prevNode->nextNode = node->nextNode;
            node->nextNode->prevNode = node->prevNode;
        }

        free(node);
    }
    else
        printf(ERR_COLOR "\nInvalid delete location" RESET_COLOR);


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