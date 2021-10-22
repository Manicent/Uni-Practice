#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = celsius*1.8 + 32;
    printf("%.2f fahrenheit", fahrenheit);
    return 0;
}