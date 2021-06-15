#include <stdio.h>
#include <string.h>

int main(void)
{
    int c;

    while ((c = fgetc(stdin)) != EOF)
    {
        /* Upper case to lower case */
        if ( (c >= 65) && (c <= 90) )
        {
            c += 32;
        }
        /* Lower case to upper case */
        else if ( (c >= 97) && (c <= 122) )
        {
            c -= 32;
        }
        fputc(c, stdout);
    }
    return 0;
}

