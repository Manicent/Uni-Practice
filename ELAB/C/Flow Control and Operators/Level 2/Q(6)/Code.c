#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d%d%d", &a, &b, &n);
    c=a*pow(2,n/2+n%2);
    d=b*pow(2,n/2);
    if(c>d) printf("%d",c/d);
    else    printf("%d",d/c);
    return 0;
}