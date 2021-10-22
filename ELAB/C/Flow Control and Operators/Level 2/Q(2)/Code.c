#include <stdio.h>
int main()
{
    int currency;
    scanf("%d", &currency);
    printf(currency%2==0 ? "Even Currency" : "Odd Currency");
    return 0;
}