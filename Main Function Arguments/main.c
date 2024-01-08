#include <stdio.h>

// argc --> argument count: number of items typed at the command prompt
// argv --> argument typed at the command prompt

int main(int argc, char *argv[])
{
    printf("There were %d command line arguments\n",argc);
    printf("This program is named as %s\n",argv[0]);

    return(0);
}
