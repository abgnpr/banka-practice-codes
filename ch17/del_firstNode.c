// DELETE FIRST NODE

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

    // QUEUE IMPLEMENTATION
    // /* ----- A linked list with 10 node  ----- */
    // for (int i = 1; i <= 10; ++i)
    // {
    //     node = (struct myData *)malloc(sizeof(struct myData));

    //     node->number = i;
    //     node->nextNode = NULL;

    //     if (START == NULL)
    //         START = node;
    //     else
    //         prevNode->nextNode = node;

    //     prevNode = node;
    // }
    // /* --------------------------------------- */

    // /* ---- Deleteing a node at beginning ---- */
    // temp = START;
    // START = START->nextNode;
    // free(temp);
    // /* --------------------------------------- */

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
    temp = START;
    START = START->nextNode;
    free(temp);
    /* --------------------------------------- */

    // printing the data
    for (node = START; node != NULL; node = node->nextNode)
        printf("%d\n", node->number);

    return 0;
}
