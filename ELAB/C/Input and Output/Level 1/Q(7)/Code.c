#include <stdio.h>
int main()
{
    int length,width,height,surfacearea;
    scanf("%d%d%d", &length, &width, &height);
    surfacearea = 2*(length*width + width*height + height*length);
    printf("%d", surfacearea);
	return 0;
}