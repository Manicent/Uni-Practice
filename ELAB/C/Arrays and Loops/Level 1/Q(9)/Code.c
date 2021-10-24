#include <stdio.h>
int main()
{
    int noofrowsinclass,i,j,pcon=1;
    scanf("%d", &noofrowsinclass);
    for(i=0; i<noofrowsinclass; i++)
    {
        for(j=0; j<=i; j++)
            printf(pcon ? "Pass " : "Fail ");
        printf("\n");
        pcon=!pcon;
    }
    return 0;
}