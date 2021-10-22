#include <stdio.h>
int main()
{
    int n,a,b,k;
    int x=0;
    scanf("%d%d%d%d", &n, &a, &b, &k);
    x+=n/a;
    x+=n/b;
    x-=2*n/(a*b);
    if(x>=k)
        printf("Win");
    else if(x<k)
        printf("Lose");
    return 0;
}