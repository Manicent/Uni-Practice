#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed, costperunit;
    scanf("%d%d", &unitconsumed, &costperunit);
    printf("%lld",(long long int)pow(unitconsumed, costperunit));
    return 0;
}