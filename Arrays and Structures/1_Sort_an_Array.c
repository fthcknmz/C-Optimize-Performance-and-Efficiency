
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(int argc, const char * argv[]){
    
    int numbers[SIZE], temp;
    /* populate the array */
    srand((unsigned)time(NULL));
    for(int i=0; i<SIZE; i++){
        numbers[i] = rand() % 100 + 1;
    }
    /* Display the unsorted array */
    puts("Unsorted Array");
    for(int i=0; i<SIZE; i++){
        printf("%3d", numbers[i]);
    }
    putchar('\n');
    
    /* Sort the array */
    for(int i=0; i<SIZE; i++){
        for(int j=i+1; j<SIZE; j++){
            if(numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    /* Display the sorted array */
    puts("Sorted Array");
    for(int i=0; i<SIZE; i++){
        printf("%3d", numbers[i]);
    }
    putchar('\n');
    
    return 0;
}
