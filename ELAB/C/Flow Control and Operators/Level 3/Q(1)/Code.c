#include <stdio.h>
int main()
{
    int x,y,k;
    scanf("%d%d%d", &x, &y, &k);
    if(((x+y)/k)%2)
        printf("Fazil");
    else
        printf("Tina");
    return 0;
}