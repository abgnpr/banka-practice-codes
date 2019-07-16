#include <stdio.h>
#include <string.h>

#define MAXLEN 100
#define TRUE  1
#define FALSE 0

/* Input a sentence and print it after
 * replacing occureneces of a particular
 * word it by another entered word.*/
int main() {

    int i = 0, j = 0, wordNum, repList_index,
        repList_byWordNum[MAXLEN],
        replace_match_found;

    char s[MAXLEN+2], w[50], revOf_w_toRep[50], w_toRep[50],
     new_s[MAXLEN+2], words[MAXLEN][50], ch;

    fgets(s, MAXLEN+2, stdin);

    if (s[strlen(s)-1] != '\n') {
        printf("Line max. length exceeded");

    } else {       
        fgets(w_toRep, 50, stdin);
        /* since input is using fgets */
        w_toRep[strlen(w_toRep)-1] = '\0';
        wordNum = 0; replace_match_found = FALSE;
        repList_index = 0;
        
        while ((ch = s[i++]) != '\0') {
            if ((ch >= 'A' && ch <= 'Z')
            ||  (ch >= 'a' && ch <= 'z')
            ||  (ch == '\'' && j != 0))
                w[j++] = ch;
            else {
                w[j] = '\0';
                if (strlen(w) > 0) {
                    strcpy(words[wordNum], w);
                    if (strcmp(w, w_toRep) == 0) {
                        replace_match_found = TRUE;
                        repList_byWordNum[repList_index++] = wordNum;
                    }
                    ++wordNum;
                }
                j = 0;
            }
        }

        if(replace_match_found) {
            revOf_w_toRep[0] = '\0';
            for (i = 0; i < strlen(w_toRep); ++i)
                revOf_w_toRep[i] = w_toRep[strlen(w_toRep) - i - 1];
            revOf_w_toRep[strlen(revOf_w_toRep)] = '\0';
            for (i = 0; i < repList_index; ++i)
                strcpy(words[repList_byWordNum[i]], revOf_w_toRep);
            new_s[0] = '\0';
            for (i = 0; i < wordNum; ++i) {
                strcat(new_s, words[i]);
                strcat(new_s, " ");
            }
            printf("%s\n", new_s);
        } else {
            printf("No match found!\n");
        }

    }

}
