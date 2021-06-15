#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M2KM 1.60934
#define BUFSIZE 10

int main(void)
{
    char mph[BUFSIZE] = { 0 };
    while (fgets(mph, sizeof(mph), stdin) != NULL)
    {
        /* Convert mph if it's numeric */
        if ( strspn(mph, "0123456789.-\n") == strlen(mph) )
        {
            printf("%.1f\n", atof(mph) * M2KM);
        } else
        {
            fprintf(stderr, "Found non-numeric value\n");
            return 1;
        }
    }
    return 0;
}

