#include <stdio.h>
int main()
{
    int n,m,res;
    scanf("%d%d", &n, &m);
    res = n*n + m*m - (n-m)*(n-m) - (n+m);
    printf("%d", res);
    return 0;
}