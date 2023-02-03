/*
#DUPLICATE EXIST (LEET CODE)

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input: nums = [1,2,3,1]
Output: true

Input: nums = [1,2,3,4]
Output: false

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int nums[100], n, i, j, twice;

    printf("\nEnter the no. of elements in array Nums[]: ");
    scanf("%d", &n);

    printf("\nNums[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        twice = 0;
        for (j = 0; j < n; j++)
        {
            if ((i != j) && (nums[i] == nums[j]))
            {
                twice++;
                goto SKIP;
            }
        }
    }
    SKIP:
    if (twice > 0)
        printf("\nTrue\n");
    else
        printf("\nFalse\n");
}