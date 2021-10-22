#include <stdio.h>
int main()
{
    int n;
    int n_i, pn_i;
    char *bname[] = {"LB", "MB", "UB", "LB", "MB", "UB", "SL", "SU"};
    scanf("%d", &n);
    if(!(n_i=n%8))
        n_i=8;          //If n%8=0 then index is set to 8
    if(n_i<=3)          pn_i=n_i+3;
    else if(n_i<=6)     pn_i=n_i-3;
    else if(n_i==7)     pn_i=8;
    else                pn_i=7;
    printf("%d%s", n-n_i+pn_i, bname[pn_i-1]);
	return 0;
}