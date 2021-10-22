#include <stdio.h>
int main()
{
    float basicPay,employeeFund,employerFund;
    scanf("%f", &basicPay);
    employeeFund = 0.175*basicPay;
    employerFund = 0.235*basicPay;
    printf("%.2f\n%.2f", employeeFund, employerFund);
    return 0;
}