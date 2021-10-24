#include <stdio.h>
int main()
{
    int h[100001], n, i, j, h_max, h_min, k, k_max=0;
    scanf("%d", &n);
    scanf("%d", &h[0]);
    h_min=h[0];
    h_max=h[0];
    for(i=1; i<n; i++)
    {
        scanf("%d", &h[i]);
        if(h[i]<h_min)      h_min=h[i];
        else if(h[i]>h_max) h_max=h[i];
    }
    for(i=h_min; i<h_max; i++)
    {
        k=0;
        for(j=0; j<n-1; j++)
        {
            int low, high;
            if(h[j]<h[j+1])
                low=h[j], high=h[j+1];
            else
                low=h[j+1], high=h[j];
            if(i>=low && i+1<=high)
                k++;
        }
        if(k>k_max) k_max=k;
    }
    printf("%d", k_max);
    return 0; 
}