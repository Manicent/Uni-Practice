#include <stdio.h>
#include <math.h>
#define PI_VALUE 3.14
int main()
{
    float radiusofball,volumeofball;
    scanf("%f", &radiusofball);
    volumeofball = 4.0/3.0*PI_VALUE*pow(radiusofball,3);
    printf("%f", volumeofball);
    return 0;
}