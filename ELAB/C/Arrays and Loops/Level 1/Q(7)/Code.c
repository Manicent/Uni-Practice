#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,T,i;
    scanf("%d", &T);
    while(T--)
    {
        int flag_found=0, k;
        scanf("%d %d",&n,&k);
        int integers[n];
        for(i=0; i<n; i++)
            scanf("%d", &integers[i]);
        for(i=0; i<n-1; i++)
            if(abs(integers[i]-integers[i+1])>k)
            {   flag_found=1;   break;  }
        if(flag_found)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}