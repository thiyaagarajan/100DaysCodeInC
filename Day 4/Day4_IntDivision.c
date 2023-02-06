/*
#Divide Two Integers (LEET CODE)

Given two integers dividend and divisor, divide two integers  using multiplication, division, and mod operator.
The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return dividenddivisor.

dividend = 10, divisor = 3
3
10/3 = 3.33333.. which is truncated to 3.


dividend = 7, divisor = -3
-2
7/-3 = -2.33333.. which is truncated to -2.
*/

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