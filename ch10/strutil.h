#include <string.h>
#include <stdlib.h>

#define MAXLEN 100
#define MAXWORDLEN 50

#define TRUE  1
#define FALSE 0

/* isVowel : returns 1 if _ch is a vowel
 * otherwise it returns 0 */
int isVowel(char _ch) {
    switch (_ch) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return TRUE;
    default:
        return FALSE;
    }
}

int isOddLength(char* _Str) {
    return strlen(_Str)%2? TRUE : FALSE;
}

/**
 * obtainWordsFrom : 
 * 
 * stores the words in the given string 
 * as null terminated strings in a string 
 * array. (in order of their occurence in
 * the sentence)
 * 
 * return value : number of words in the
 * given sentence.
 * 
 * NOTE : converts a null '\0' terminated 
 * string to newline-and-null '\n''\0' 
 * terminated type. */
int obtainWordsFrom(char *_Str, char _words[][MAXWORDLEN])
{
    int i = 0, j = 0, _wN = 0;
    char ch, _word[MAXWORDLEN];

    int _StrLen = strlen(_Str);
    if (_Str[_StrLen - 1] != '\n') {
        _Str[_StrLen] = '\n';
        _Str[_StrLen + 1] = '\0';
    }

    while ((ch = _Str[i++]) != '\0')
    {
        if ((ch >= 'A' && ch <= 'Z')
        ||  (ch >= 'a' && ch <= 'z')
        ||  (ch == '\'' && j != 0) )
            _word[j++] = ch;
        else
        {
            _word[j] = '\0';
            if (strlen(_word) > 0)
                strcpy(_words[_wN++], _word);
            j = 0;
        }
    }

    return _wN;

}