#include <stdio.h>
#include <stdlib.h>
void shift_right(int arr[], int n)  {
    int temp=arr[n-1],i;
    for(i=n-1; i>=1; i--)   arr[i]=arr[i-1];
    arr[0]=temp;
}
int main()
{
    int rot[100000];
    int n,k,T,i;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d",&n,&k);
        for(i=0; i<n; i++)
           scanf("%d ",&rot[j]);
        for(i=0; i<k; i++)
            shift_right(rot, n);
        for(i=0; i<n; i++)
            printf("%d ", rot[j]);
        printf("\n");
    }
    return 0;
}