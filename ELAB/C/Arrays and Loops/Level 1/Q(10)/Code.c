#include <stdio.h>
int check_validity(int possiblesum, int time[], int n, int k)
{
    int count=0, sum=0, i;
    for(i=0; i<n; i++)
    {
        if(time[i]>possiblesum)
            return 0;
        sum+=time[i];
        if(sum>possiblesum)
        {
            count++;
            sum=time[i];
        }
    }
    count++;
    if(count<=k)
        return 1;
    return 0;
}
int find_efficient_time(int ans, int time[], int low, int high, int n, int k)
{
    if(low>high)
        return ans;
    int mid = low + (high - low) / 2;
    if(check_validity(mid, time, n, k))
        return find_efficient_time(mid, time, low, mid-1, n, k);
    else
        return find_efficient_time(ans, time, mid+1, high, n, k);
}
int main()
{
    int timetosolve[100005], n, m, i, max=0, sum=0, ans;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &timetosolve[i]);
        if(timetosolve[i]>max)  max=timetosolve[i];
        sum+=timetosolve[i];
    }
    ans = find_efficient_time(0, timetosolve, max, sum, n, m);
    printf("%d", ans);
    return 0;
}