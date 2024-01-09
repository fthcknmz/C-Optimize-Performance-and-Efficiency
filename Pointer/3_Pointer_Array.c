#include <stdio.h>

int main(void)
{
    int f[5] = { 13, 21, 34, 55, 89 };
    int *pf;
    pf = f;
    
    for(int i=0; i<5; i++)
        printf("%d ", *(pf+i));
    putchar('\n');
    putchar('\n');
    
    printf("Base address = %p\n",pf);
    printf("Size of int = %lu\n",sizeof(int));
    
    for(int i=0; i<5; i++){
        printf("%p %d\n",pf,*pf);
        pf++;
    }
    
    return(0);
}
