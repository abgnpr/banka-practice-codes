#include <stdio.h>
#include <string.h>

/** Input a sentence and print it back
 * after arranging all its words in
 * ascending order of, total sum of
 * ASCII code of the characters in
 * the word.
*/

#define MAXWORDS 100
#define MAXWORDLEN 15
#define MAXLEN 100

int sumASCII(char word[MAXWORDLEN])
{
    int ch, c = 0, sum = 0;
    while ((ch = word[c++]) != '\0')
        sum += ch;
    return sum;
}

int main(int argc, char const *argv[])
{
    int i, j, c, location;
    char ch,
        s[MAXLEN + 2] = {'\0'},
                   S[MAXLEN + 2] = {'\0'},
                   words[MAXWORDS][MAXWORDLEN] = {'\0'},
                   temp[MAXWORDLEN];

    fgets(s, MAXLEN + 2, stdin);
    s[strlen(s) - 1] = ' ';
    s[strlen(s) - 0] = '\n';
    s[strlen(s) + 1] = '\0';

    c = 0;
    while ((ch = s[c]) == ' ' || ch == '\t')
        c++;

    char *ndl1 = s + c, *ndl2;

    c = 0;
    while ((ndl2 = strstr(ndl1, " ")) || (ndl2 = strstr(ndl1, "\t")))
    {
        if (ndl1 != ndl2)
            strncpy(words[c++], ndl1, ndl2 - ndl1);
        ndl1 = ndl2 + 1;
    }

    for (i = 0; i < c - 1; ++i)
    {
        location = i;
        for (j = i + 1; j < c; ++j)
        {
            if (sumASCII(words[location]) > sumASCII(words[j]))
            {
                strcpy(temp, words[location]);
                strcpy(words[location], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for (i = 0; i < c; ++i)
    {
        strcat(S, words[i]);
        strcat(S, " ");
    }

    S[strlen(S)] = '\0';
    fputs(S, stdout);
    printf("\n");

    return 0;
}
