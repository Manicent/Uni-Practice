#include <stdio.h>
int main()
{
    int s,w1,w2,w3,k=0;
    scanf("%d%d%d%d", &s,&w1,&w2,&w3);
    if(s>=w1+w2+w3)
        k=1;
    else if(s>=w1+w2 || s>=w2+w3)
        k=2;
    else
        k=3;
    printf("%d", k);
    return 0;
}