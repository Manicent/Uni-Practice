#include <stdio.h>
int main()
{
    int competition[100002];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &competition[i]);
    for(i=0; i<n-1; i++)
        printf("%d ", competition[i]+competition[i+1]);
    printf("%d", competition[i]);
    return 0;
}
