#include <stdio.h>

// (expression) ? (if true) : (else);

int main(int argc, const char * argv[]) {

    int a = 6, b = 5, max;
    max = (a>b) ? a : b;
    printf("%d\n\n", max);
    
    int age = 30;
    char* classification;
    classification = (age < 19) ? "kid" : (age < 65) ? "adult" : "elder" ;
    printf("%s\n", classification);
    
    return 0;
    
}

