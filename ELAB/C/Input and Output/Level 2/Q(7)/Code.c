#include <stdio.h>
int main()
{
    float rad;
    float PI=3.14,area,ci;
    scanf("%f", &rad);
    area=rad*rad*PI;
    ci=2*rad*PI;
    printf("%.2f\n%.2f", area, ci);
    return 0;
}