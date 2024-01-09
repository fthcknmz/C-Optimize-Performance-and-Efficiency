#include <stdio.h>

int main(void)
{
    char string[] = "Greetings from the digital world\n";
    char *s;
    s = string;
    
    while(*s)
    {
        putchar(*s++);
    }
    
    s = string;
    
    while(*s)
    {
        putchar( ++*s++ );
    }

    return(0);
}
