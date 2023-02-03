/*
#Array: Monotonic (LEET CODE)

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Sample Input: nums = [1,2,2,3]
Sample Output: true

nums = [6,5,4,4]
true

nums = [1,3,2]
false
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nums[100], n, i, j, mi = 0, md = 0;

    printf("\nEnter the no. of elements in array Nums[]: ");
    scanf("%d", &n);

    printf("\nNums[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        if (nums[i] <= nums[i+1])
            mi++;
        if (nums[i] >= nums[i+1])
            md++;
    }

    if (mi == n-1 || md == n-1)
        printf("\nTrue\n");
    else
        printf("\nFalse\n");
}