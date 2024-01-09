#include <stdio.h>
#include <string.h>

struct Person{
    char name[32];
    int age;
    float iq;
};

void showStruct(struct Person p);

int main(void){
    
    struct Person Jedi;
    strcpy(Jedi.name, "Obi Wan Kenobi");
    Jedi.age = 32;
    Jedi.iq = 234.5;
    
    showStruct(Jedi);
    
    return 0;
}

void showStruct(struct Person p){
    printf("%s is %d years old\n", p.name, p.age);
    printf("%s has an IQ of %.1f\n", p.name, p.iq);
}
