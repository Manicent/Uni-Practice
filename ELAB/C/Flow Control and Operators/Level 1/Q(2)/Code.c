#include <stdio.h>
int main()
{
    int n, req;
    scanf("%d", &n);
    if(n%2==0)  req=n/2;
    else        req=n/2+1;
    printf("%d", req);
    return 0;
}