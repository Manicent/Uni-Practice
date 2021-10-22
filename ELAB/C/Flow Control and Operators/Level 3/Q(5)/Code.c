#include <stdio.h>
int main()
{
    char operator;
    double n1, n2, res;
    scanf("%c%lf%lf", &operator, &n1, &n2);
    switch(operator)
    {
        case '+':
            res = n1+n2;
            break;
        case '-':
            res = n1-n2;
            break;
        case '*':
            res = n1*n2;
            break;
        case '/':
            res = n1/n2;
            break;
    }
    printf("%.1lf", res);
    return 0;
}