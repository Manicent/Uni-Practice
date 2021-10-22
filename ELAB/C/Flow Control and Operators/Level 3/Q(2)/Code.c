#include <stdio.h>
int main()
{
    int workage;
    scanf("%d", &workage);
    if(workage<18)
        printf("You are Minor\nContinue Your Studies");
    else if(workage>60)
        printf("You are too Old\nPlease Collect your Pension");
    else
        printf("You are Eligible\nYou can Apply for Job");
    return 0;
}