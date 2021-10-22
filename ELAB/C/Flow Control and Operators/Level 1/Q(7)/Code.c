#include <stdio.h>
int main()
{
    long long int A,B,K;
    scanf("%lld%lld%lld", &A, &B, &K);
    if(A>=K)            A-=K;
    else if(K<=A+B) {   B-=(K-A);   A=0;    }
    else            {   B=0;        A=0;    }
    printf("%lld %lld", A, B);
    return 0;
}