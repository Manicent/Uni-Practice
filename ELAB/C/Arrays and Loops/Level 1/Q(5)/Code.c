//Marked for Future Review as this isn't the right answer
//It works, but has redundant code and should fail cyclomatic complexity requirement
#include <stdio.h>
void scanarr(int x[], int u[], int k)
{   
    int i;  
    for(i=0; i<k; i++)  {   
        scanf("%d",&x[i]);  
        u[i]=x[i]<1?0:1;    
    }   
}
int main()
{
    int x[100],y[100],u[100],v[100];
    int i,n,k,sum=0;
    scanf("%d %d",&n,&k);
    scanarr(x,u,k);
    scanarr(y,v,k);
    for(i=0; i<k; i++)
    if((u[i]&&v[i])==0)
        continue;
    else
        sum+=(x[i]>n/2?n-x[i]:x[i]-1)+(y[i]>n/2?n-y[i]:y[i]-1);
    printf("%d", sum);
	return 0;
}