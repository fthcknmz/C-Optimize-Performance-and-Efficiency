#include <stdio.h>

int main(void)
{
    char *string = "Greetings from the computer\n";

    while(*string != '\0')
    {
        putchar(*string);
        string++;
    }

    return(0);
}

