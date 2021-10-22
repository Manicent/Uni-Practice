#include <stdio.h>
int main()
{
    int days;
    scanf("%d", &days);
    switch(days)
    {
        case 1:
            printf("Azure");
            break;
        case 2:
            printf("Beige");
            break;
        case 3:
            printf("Brick Red");
            break;
        case 4:
            printf("Champagne");
            break;
        case 5:
            printf("Desert sand");
            break;
        case 6:
            printf("Ivory");
            break;
        case 7:
            printf("Pear");
            break;
        default:
            printf("Invalid Day");
    }
	return 0;
}