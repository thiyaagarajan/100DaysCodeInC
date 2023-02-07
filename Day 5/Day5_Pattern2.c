/*
2) 132 Pattern (LEET CODE)

Given an array of n integers nums, a  is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].
Return truenumsfalse


nums = [1,2,3,4]
false
There is no 132 pattern in the sequence.


nums = [3,1,4,2]
true
There is a 132 pattern in the sequence: [1, 4, 2].


nums = [-1,3,2,0]
true
There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nums[100], n, i, j, k, count = 0;

    printf("\nEnter the no. of elements in array Nums[]: ");
    scanf("%d", &n);

    printf("\nNums[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n-2; i++)
    {
        for (j = i+1; j < n-1; j++)
        {
            if (nums[i] < nums[j])
            {
                for (k = j+1; k < n; k++)
                {
                    if (nums[j] > nums[k] && nums[i] < nums[k])
                        count++;
                }
            }
        }
    }

    printf("\nResult: %d\n", count);
}