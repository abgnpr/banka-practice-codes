#include <stdio.h>
#include <stdlib.h>

struct myData
{
    int number;
    struct myData *nextNode, *prevNode;
};

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

    for (node = START; node != NULL; node = node->nextNode)
    {
        printf("%d\n", node->number);
    }

    for (node = END; node != NULL; node = node->prevNode)
    {
        printf("%d\n", node->number);
    }

    return 0;
}
