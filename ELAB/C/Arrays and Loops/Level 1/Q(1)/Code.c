#include <stdio.h>
int main()
{
    int t,n,x[100002],y[100002],i;
    scanf("%d", &t);
    while(t--)
    {
        int timeH=0, timeR=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)  scanf("%d", &x[i]);
        for(i=0; i<n; i++)  scanf("%d", &y[i]);
        for(i=0; i<n; i++)
        if(i%2)
            timeH+=x[i], timeR+=y[i];
        else   
            timeH+=y[i], timeR+=x[i];
        printf("%d",timeH<timeR?timeH:timeR);
    }
    return 0;
}