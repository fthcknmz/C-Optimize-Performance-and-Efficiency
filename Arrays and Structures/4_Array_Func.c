#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int *arr);
void display(int *arr);

int main(void)
{
    int x;
    int a[10];

    puts("Here are 10 random numbers:");
    generate(a);
    display(a);
    
    return(0);
}

void generate(int *arr){
    srand((unsigned)time(NULL));
    for(int x=0;x<10;x++)
        arr[x] = rand() % 100 + 1;
}

void display(int *arr){
    for(int x=0;x<10;x++)
        printf(" %3d",arr[x]);
    putchar('\n');
}
