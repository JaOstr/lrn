#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Using getenv to fetch env vars
    printf("Your username is %s\n", getenv("USER"));
    printf("Your home dir is: %s\n", getenv("HOME"));
    printf("Your shell: %s\n", getenv("SHELL"));
    printf("Your editor: %s\n", getenv("EDITOR"));
    if ( strstr(getenv("TERM"), "256color") ||
         strstr(getenv("TERM"), "xterm") )
    {
        printf( "\x1B[0;31mYour \x1B[0;32mterminal "
                "\x1B[0;33msupports \x1B[0;34mcolors\n"
                "\x1B[0;35mYay, \x1B[0;36mcool!\x1B[0m\n" );
    } else {
        printf("Your terminal doesn't support colors\n");
    }

    return 0;
}

