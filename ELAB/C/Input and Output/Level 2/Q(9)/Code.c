#include <stdio.h>
#include <math.h>
int main()
{
    int N,fp,sp,tp;
    scanf("%d",&N);
    fp = N, sp = pow(N,2), tp = pow(N,3);
    printf("%d %d %d", fp, sp, tp);
	return 0;
}