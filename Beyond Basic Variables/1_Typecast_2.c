#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a = -10;
    float aroot;
    aroot = sqrt(abs(a)); // convert nega. to posit.
    
    printf("The square root of %d is %f\n",a,aroot);

    return(0);
}
