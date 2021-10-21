#include <stdio.h>
int main()
{
    int sec,h,m,s;
    scanf("%d", &sec);
    s=sec%60;
    m=(sec/60)%60;
    h=(sec/3600);
    printf("%dH:%dM:%dS",h,m,s);
    return 0;
}