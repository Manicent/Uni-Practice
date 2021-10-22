#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d", &n,&k);
    if(n%k==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}