#include <stdio.h>
int main()
{
    int days,hours,minutes,seconds,total_days_seconds,total_min_hours,total_minutes_seconds,total;
    scanf("%d%d%d%d", &days, &hours, &minutes, &seconds);
    total_days_seconds=86400*days;
    total_minutes_seconds=60*minutes;
    total_min_hours=3600*hours;
    total=seconds+total_min_hours+total_minutes_seconds+total_days_seconds;
    printf("%d seconds", total);
    return 0;
}