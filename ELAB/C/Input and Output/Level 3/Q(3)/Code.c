#include <stdio.h>
int main()
{
    float appleno;
    scanf("%f", &appleno);
    printf("%d", ((int)appleno)%10);
    return 0;
}