#include <stdio.h>
#include <math.h>
int main()
{
    float gravity,distance,vf;
    gravity = 9.8;
    scanf("%f",&distance);
    vf = sqrt(2*distance*gravity);
    printf("%.2f m/s", vf);
    return 0;
}