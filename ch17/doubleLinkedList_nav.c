#include <stdio.h>
#include <stdlib.h>
#include "getch.h"

struct myData
{
    int number;
    struct myData *nextNode, *prevNode;
};

int main(int argc, char const *argv[])
{
    struct myData *START = NULL, *END = NULL, *node, *lastUsed_node;

    for (int i = 1; i <= 10; ++i)
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

    printf("\nNavigation :  1:NextNode 2:PrevNode\n");
    char choice;
    for (node = START; choice != 'q';)
    {
        if (node == NULL)
        {
            if (choice == 'B' || choice == 'C')
                node = END;
            else if (choice == 'A' || choice == 'D')
                node = START;
        }
        else
        {
            if (lastUsed_node != node)
            {
                system("clear");
                printf("\n\n");
                printf("\t\t\t\tCurrent Node : [%d]\n", node->number);
                printf("\n\n");
                
                lastUsed_node = node;
            }

            // arrow keys
            choice = getch();
            if (choice == '\033')
            {
                getch(); // skip  the '['

                switch (choice = getch())
                {
                case 'A':
                case 'D':
                    node = node->prevNode;
                    break;
                case 'B':
                case 'C':
                    node = node->nextNode;
                    break;
                }
            }
        }
    }
}
