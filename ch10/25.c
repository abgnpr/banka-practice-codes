#include <stdio.h>
#include <string.h>

/* getWord : returns word number 'wordNum' from
 * the given string. */
const char *getWord(char *_Str, int wordNum)
{

    if (wordNum < 0)
        return '\0';

    unsigned short i, wN, nC;
    static char word[50] = {'\0'};

    for (i = 0, wN = 0; i <= strlen(_Str); ++i)
    {
        if (_Str[i] == ' ' || _Str[i] == '\0')
        {
            if (nC != 0)
                ++wN;
            nC = 0;
        }
        else if (wN == wordNum)
        {
            word[strlen(word)] = _Str[i];
            ++nC;
        }
        else
        {
            ++nC;
        }
    }

    word[strlen(word)] = '\0';
    return word;
}

/* Input a line and print each word 
 * separately. */
int main()
{
    char s[100], word[50], blank[50] = {'\0'};

    gets(s);

    for (short i = 0; strcmp(getWord(word, i), blank) != 0; ++i)
    {
        printf("%s\n", getWord(s, i));
    }
}
