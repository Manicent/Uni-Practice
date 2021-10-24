//VLAs are not really standard in C but it asked their use and allowed it :/
#include <stdio.h>
int main()
{
    int markwaugh,stevewaugh,n,i;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(i=2; i<=n; i++)
        arr[i]=arr[i-1]+arr[i-2];
    markwaugh=arr[n];
    for(i=3; i<=n; i++)
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    stevewaugh=arr[n];
    printf("Steve Waugh:%d\nMark Waugh:%d", stevewaugh, markwaugh);
    return 0;
}