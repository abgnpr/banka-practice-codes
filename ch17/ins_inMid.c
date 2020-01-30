// INSERT IN MIDDLE

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

    /* ---- Inserting a node in the middle ---- */

    // Creating a new node
    newNode = (struct myData *)malloc(sizeof(struct myData));
    newNode->number = 256;    // data
    newNode->nextNode = NULL; // since it'll be the end node

    // input node after which another node
    // is to be inserted
    int nodeNumber;
    printf("Enter node number: ");
    scanf("%d", &nodeNumber);

    needle = START;
    if (nodeNumber == 0)
    {
        START = newNode;
        newNode->nextNode = needle;
    }
    else if (nodeNumber >= 1 && nodeNumber <= 10)
    {
        // locating the node
        for (int i = 1; i < nodeNumber; ++i)
            needle = needle->nextNode;

        // inserting in the middle
        newNode->nextNode = needle->nextNode;
        needle->nextNode = newNode;
    }
    else
        printf("Node not found! No insertions\n");

    // printing the data
    for (node = START; node != NULL; node = node->nextNode)
        printf("%d\n", node->number);

    return 0;

    return 0;
}
