#include <stdio.h>

int divide(int dividend, int divisor)
{
    int dd, ds;
    signed int q = 0;

    dd = dividend;
    ds = divisor;

    if (dividend < 0)
        dividend *= -1;
    if (divisor < 0)
        divisor *= -1;

    while (dividend >= divisor)
    {
        dividend = dividend - divisor;
        q++;
    }

    if ((dd < 0 || ds < 0) && !(dd < 0 && ds < 0))
        q *= -1;

    return q;
}

void main()
{
    signed int q;
    int dd, ds;
    scanf("%d%d", &dd, &ds);
    q = divide(dd, ds);
    printf("\n%d\n", q);
}