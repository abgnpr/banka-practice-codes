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
    int i;

    for (i = 1; i <= 5; ++i)
    {
        node = (struct myData *)malloc(sizeof(struct myData));

        printf("Enter a number: ");
        scanf("%d", &node->number);
        node->nextNode = NULL;

        if (START == NULL)
            START = node;
        else
            prevNode->nextNode = node;

        prevNode = node;
    }

    for (node = START; node != NULL; node = node->nextNode)
    {
        printf("%d\n", node->number);
    }

    return 0;
}
