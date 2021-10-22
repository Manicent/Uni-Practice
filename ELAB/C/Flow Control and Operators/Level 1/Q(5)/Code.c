#include <stdio.h>
#include <stdlib.h>
int main()
{
    int aravspeed,aaronspeed,speeddiff;
    scanf("%d%d", &aravspeed, &aaronspeed);
    speeddiff = abs(aaronspeed - aravspeed);
    printf("%d", speeddiff);
	return 0;
}