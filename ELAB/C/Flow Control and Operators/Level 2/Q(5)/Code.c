#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8;
    printf("%.2f Centigrade\n",celsius);
    if(celsius>=150)        printf("Very Hot");
    else if(celsius>=100)   printf("Hot");
    else                    printf("Moderate");
    return 0;
}