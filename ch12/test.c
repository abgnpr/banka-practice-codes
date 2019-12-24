#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[25];

    gets(s);
    gets(s);
    gets(s);

    // fgets(s, 25, stdin);
    // fgets(s, 25, stdin);
    // fgets(s, 25, stdin);

    scanf("%s", s);
    scanf("%s", s);
    scanf("%s", s);

    return 0;
}


#define N 10
#define NAMELEN 15

void sortBetween(int m, int n, char *a[NAMELEN])
{
    int i, j, location;
    char temp[NAMELEN];

    for (i = m; i < n / 2 - 1; ++i)
    {
        location = i;
        for (j = i + 1; j < n / 2; ++j)
        {
            if (strcasecmp(a[location], a[j]) > 0)
            {
                strcpy(temp, a[location]);
                strcpy(a[location], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
}