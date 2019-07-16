#include <stdio.h>
#include <string.h>

/* input a name and print its initials
 * and the last name as follows: 
 * Input :  Mohandas Karmchand Gandhi
 * Output:  M.K.Gandhi 
*/
int main()
{
    char name[50], partName[20];
    int i, c = 0;

    gets(name);
    partName[c] = '\0';

    for (i = 0; i < strlen(name); ++i)
    {
        if (name[i] != ' ')
            partName[c++] = name[i];
        else
        {
            partName[c] = '\0';
            printf("%c.", partName[0]);
            c = 0;
        }
    }

    partName[c] = '\0';
    
    /* The result is directly printed instead
     * of being stored in a variable. 
     * Not suitable if we may want to return
     * instead of print. */
    printf("%s\n", partName);
}
