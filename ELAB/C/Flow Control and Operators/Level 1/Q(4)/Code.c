#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b && b==c) || (a!=b && b!=c && c!=a))
        printf("No");
    else
        printf("Yes");
    return 0;
}