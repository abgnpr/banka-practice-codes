// DELETE LAST NODE

#include <stdio.h>
#include <stdlib.h>

struct myData
{
    int number;
    struct myData *nextNode;
};

int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *node, *prevNode, *temp;

    // STACK IMPLEMENTATION
    /* -------- A stack with 10 nodes -------- */
    for (int i = 1; i <= 10; ++i)
    {
        node = (struct myData *)malloc(sizeof(struct myData));

        node->number = i;
        node->nextNode = START;

        START = node;
    }
    /* --------------------------------------- */

    /* ---- Deleteing a node at beginning ---- */
    
    for (node = START; node->nextNode->nextNode != NULL; node=node->nextNode);
    free(node->nextNode);
    node->nextNode = NULL;

    /* --------------------------------------- */

    // printing the data
    for (node = START; node != NULL; node = node->nextNode)
        printf("%d\n", node->number);

    return 0;
}
