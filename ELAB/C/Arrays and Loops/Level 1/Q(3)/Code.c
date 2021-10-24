#include <stdio.h>
int main()
{
    int A[3][3],i,j,s1=0,s2=0;
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    scanf("%d ",&A[i][j]);
    for(i=0; i<9; i++)
    if(i%2==0)  s1+=A[i/3][i%3];
    else        s2+=A[i/3][i%3];
    printf("%d\n%d",s1,s2);
    return 0;
}