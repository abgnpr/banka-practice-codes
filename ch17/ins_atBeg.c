// INSERT AT BEGINNING

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

    /* ----- A linked list with 10 node  ----- */
    for (int i = 1; i <= 10; ++i)
    {
        node = (struct myData *)malloc(sizeof(struct myData));

        node->number = i;
        node->nextNode = NULL;

        if (START == NULL)
            START = node;
        else
            prevNode->nextNode = node;

        prevNode = node;
    }
    /* --------------------------------------- */


    /* ---- Inserting a node at beginning ---- */

    node = (struct myData *)malloc(sizeof(struct myData));

    // data
    node->number = 256; // some number

    // changing the head
    node->nextNode = START;
    START = node;

    /* --------------------------------------- */

    // printing the data
    for (node = START; node != NULL; node = node->nextNode)
        printf("%d\n", node->number);

    return 0;
}
