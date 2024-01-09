#include <stdio.h>

struct weather {
    char day[10];
    float temp;
};

int main(void)
{

    struct weather week[7] = {
        { "Sunday", 72.5 },
        { "Monday", 68.4 },
        { "Tuesday", 75.0 },
        { "Wednesday", 73.8 },
        { "Thursday", 65.1 },
        { "Friday", 72.8 },
        {"Saturday", 75.2 }
    };
  
    puts("This week's forecast:");
    for(int x=0;x<7;x++)
        printf("%10s %.1f degrees\n", week[x].day, week[x].temp);

    return(0);
}
