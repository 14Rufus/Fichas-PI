#include <stdio.h>
#include <ctype.h>
#include "dicionario.h"

/*
    1. Tornar o buffer dinâmico;
    2. Tornar o word boundary mais inteligente.
*/

#define SIZE 200

int main()
{
    char buffer[SIZE];
    int index, c;
    Dicionario dic1;

    /* initalize variables */
    c = 1;                          /* avoid random EOF */
    index = 0;
    buffer[index] = '\0';
    initDic(&dic1);

    /* process standard input */
    while(c != EOF)
    {
        c = getchar();
        if( !isalpha(c) && c != '-' && index!=0 )            /* whitespace found */
        {
            buffer[index] = '\0';   /* cap the string */
            acrescenta ( &dic1, buffer);
            index = 0;              /* reset index */
        }
        else if(isalpha(c) || c == '-')                        /* keep filling the buffer */
        {
            buffer[index] = c;
            index++;
        }
    }
    showDic(dic1);
    return(0);
}