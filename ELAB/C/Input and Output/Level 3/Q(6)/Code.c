#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int seconds,days,hours,minutes;
    seconds=input%60;
    minutes=(input/60)%60;
    hours=(input/3600)%24;
    days=(input/86400);
    printf("The Duration is %d days %d hours %d minutes %d seconds", days, hours, minutes, seconds);
    return 0;
}