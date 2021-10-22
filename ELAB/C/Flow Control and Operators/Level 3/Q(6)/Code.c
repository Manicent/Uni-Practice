#include <stdio.h>
#include <math.h>
int main()
{
    long long int s,c,k;
    scanf("%lld%lld%lld", &s, &c, &k);
    int res = s>=k?3:0, t=0;
    if(s>=k)    t = (1<<(s-k+1))-1;
    if(s<=c)    {
    if(k==1)    {
        t += 1<<c;
        t -= 1<<s;
    }}
    else if(c<=s-k) t -= 1<<(s-k);
    res+=(t<<1);
    printf("%d", res);
    return 0;
}