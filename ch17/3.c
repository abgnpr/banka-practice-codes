/* Program to create a linked list to
 * store an int value in every node and
 * print number of nodes in the list,
 * if you know only the address of the
 * first node in START pointer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct myData
{
    long long number;
    struct myData *nextNode;
};

void strlwr(char *__str)
{
    size_t c = 0;
    while (__str[c] != '\0')
    {
        switch (__str[c])
        {
        case 'A' ... 'Z':
            __str[c] += 32;
            break;
        }
        c++;
    }
}

void main(void)
{
    struct myData *START = NULL, *node, *prevNode;
    int done = 0;

    printf("\nEnter numbers\n\n");

    while (!done)
    {
        char str[20], *pEND = NULL;
        fgets(str, 19, stdin);

        strlwr(str);
        if (strncmp(str, "done", 4) == 0)
        {
            done = 1;
        }
        else if (!(strncmp(str, "\n", 1) == 0))
        {
            node = (struct myData *)malloc(sizeof(struct myData));

            node->number = strtoll(str, &pEND, 10);
            node->nextNode = NULL;

            if (START == NULL)
                START = node;
            else
                prevNode->nextNode = node;

            prevNode = node;
        }
    }

    int numOfNodes = 0;
    for (node = START; node != NULL; node = node->nextNode)
    {
        numOfNodes++;
    }

    printf("\nNumber of node : %d\n\n", numOfNodes);

    while (getchar() != '\n')
        ;

    if (numOfNodes > 0)
    {
        printf("Want to display the nums? [Y]/n : ");
        char ch;
        if ((ch = getchar()) == 'Y' || ch == 'y' || ch == '\n')
        {
            printf("\n");
            for (node = START; node != NULL; node = node->nextNode)
            {
                printf("%lld\n", node->number);
            }
        }
        printf("\n\n");
    }
}