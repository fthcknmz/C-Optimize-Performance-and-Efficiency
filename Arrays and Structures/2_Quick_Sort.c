#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);

void DisplayArray(int *arr){
    for(int i=0; i<SIZE; i++){
        printf("%3d", arr[i]);
    }
    putchar('\n');
}

int main(void){
    
    int numbers[SIZE];
    
    srand((unsigned int)time(NULL));
    for(int i=0; i<SIZE; i++){
        numbers[i] = rand() % 100 + 1;
    }
    puts("Unsorted Array");
    DisplayArray(numbers);
    
    // 1. --> array name, 2.--> size of array, 3. --> size of each element, 4. --> compare
    qsort(numbers, SIZE, sizeof(int), compare);
    
    puts("Sorted Array");
    DisplayArray(numbers);
}

int compare(const void *a, const void *b)
{
    return( *(int *)a - *(int *)b );
}
