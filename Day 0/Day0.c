/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.

Sample Input:
array_a=[1,2,3,4,5]

Sample output:
10  14

Explanation:
Sum everything except 1, the sum is 2+3+4+5=14.
Sum everything except 2, the sum is 1+3+4+5=13.
Sum everything except 3, the sum is 1+2+4+5=12.
Sum everything except 4, the sum is 1+2+3+5=11.
Sum everything except 5, the sum is 1+2+3+4=10.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100], n, i, j;
    int sum, max = 0, min;

    printf("\nEnter the no. of array A[] elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            if (j != i) {
                sum += a[j];
                
                if(i == 0) {
                    min = sum;
                }
            }
        }

        if (max < sum)
            max = sum;
            
        if (min > sum)
            min = sum;
    }

    printf("\nThe Result is: \nMax = %d, Min = %d", max, min);

    printf("\n");
}