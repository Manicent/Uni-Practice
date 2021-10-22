#include <stdio.h>
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    scanf("%d%f%d", &month, &roomrent, &numofdays);
    if(month==4 || month==5)
        renttopay=roomrent*1.2*numofdays;
    else
        renttopay=roomrent*numofdays;
    printf("Rs.%.2f", renttopay);
    return 0;
}