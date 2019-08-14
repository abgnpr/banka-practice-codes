#include <stdio.h>

/* returns the size of s */
size_t strlen(const char *s)
{
    size_t i = 0;
    while (*(s + i) != '\0')
        ++i;
    return i;
}

/* input a three letter word and print
 * all possible combinations that can be
 * created with the characters in the
 * word 
*/
void main(void)
{
    int i, j, k;
    char word[4], output[4];
    if (word[strlen(word)-1])
        word[strlen(word)-1] = '\0';

    printf("Input a 3 lettered word: ");
    fgets(word, 4, stdin);

    if (strlen(word) == 3)
    {
        for (i = 0; i <= 2; ++i)
        {
            output[0] = word[i];
            for (j = 0; j <= 2; ++j)
            {
                output[1] = word[j];
                for (k = 0; k <= 2; k += 1)
                {
                    output[2] = word[k];
                    output[3] = '\0';

                    printf("%s\n", output);
                }
            }
        }
    }
    else
        printf("Wrong input.\n");
}