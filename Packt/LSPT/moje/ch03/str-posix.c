#include <string.h>
#include <stdio.h>

int main()
{
    char a[] = "Hello";
    char *b;
    b = strdup(a);
    printf("b: %s\n", b);
}

