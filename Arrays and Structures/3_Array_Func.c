#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);
void display(int *arr);

int main(void)
{
    int x;
    int *a;

    puts("Here are 10 random numbers:");
    a = generate();
    display(a);
    
    return(0);
}

int *generate(void)
{
    static int array[10];
    int x;

    srand((unsigned)time(NULL));
    for(x=0;x<10;x++)
        array[x] = rand() % 100 + 1;

    return(array);
}

void display(int *arr){
    for(int x=0;x<10;x++)
        printf(" %3d",arr[x]);
    putchar('\n');
}
