#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

    while ((ch = _Str[i++]) != '\n' && ch != '\0')
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

/** 
 * getHeatMap : 
 */
int getHeatMap(
        char *_Str, char *_searchChars_,
        int _caseSensitive_, int _chAndOccu_[][2]
        ) {

    int i, j, _nMatches_ = 0, updated;
    char _ch_, _sc_;
    
    for (i = 0; i < strlen(_searchChars_); ++i) {

        _chAndOccu_[_nMatches_][1] = 0;
        updated = FALSE; j = 0;

        _sc_ = _searchChars_[i];
        if (!_caseSensitive_ && _sc_ >= 'a' && _sc_ <= 'z')
            _sc_ -= ('a'-'A');

        while ((_ch_ = _Str[j++]) != '\n' && _ch_ != '\0') {
            
            if (!_caseSensitive_ && _ch_ >= 'a' && _ch_ <= 'z')
                _ch_ -= ('a'-'A');

            if (_ch_ == _sc_) {
                if (!updated) { ++_nMatches_; updated = TRUE; }
                if (_chAndOccu_[_nMatches_-1][1] == 0)
                    _chAndOccu_[_nMatches_-1][0] = _searchChars_[i];
                _chAndOccu_[_nMatches_-1][1] += 1;
            }

        } // end while

    } // end for i

    return _nMatches_;

}

/* Reverses the given string */
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void strupr(char *str) {
    int c = 0;
    while (str[c]!='\n' && str[c]!='\0') {
        if (isalpha(str[c]))
            str[c] = toupper(str[c]);
        c += 1;
    }
}

void strlwr(char *str) {
    int c = 0;
    while (str[c]!='\n' && str[c]!='\0') {
        if (isalpha(str[c]))
            str[c] = tolower(str[c]);
        c += 1;
    }
}

// size_t strlen(const char* str) {
//     size_t l = 0;
//     for (/* l */; *(str+l) != '\0'; ++l)
//         ;
//     return l;
// }