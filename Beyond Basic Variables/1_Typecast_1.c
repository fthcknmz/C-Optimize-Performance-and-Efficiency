#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b;
    a = 10; b = 3;
    
    float c;
    c = (float)a/b; // typecasting
    
    printf("%d/%d = %.2f\n",a,b,c);

    return(0);
}
