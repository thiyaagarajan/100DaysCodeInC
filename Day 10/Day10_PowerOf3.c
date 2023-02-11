/*
#Power Of Three (LEET CODE)

Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).

Constraints:

-231 <= n <= 231 - 1

Follow up: Could you solve it without loops/recursion?
*/

#include <stdio.h>
#include <stdlib.h>

int isPowerOf3(int n)
{
    if (!(n <= 0))
        while(n > 1)
        {
            if(n % 3 == 0)
                n = n / 3;
            else
                break;
        }

    if (n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n, powerof3;

    printf("\nEnter the value of n to find is it Power Of 3: ");
    scanf("%d", &n);

    powerof3 = isPowerOf3(n);

    if (powerof3 == 1)
        printf("\nYeah! %d is power of 3.\n", n);
    else
        printf("\nOops! %d is not power of 3.\n", n);

    return 0;
}