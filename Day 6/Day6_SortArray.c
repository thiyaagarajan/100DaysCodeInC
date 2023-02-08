/*
#Sort Array By Parity (LEET CODE)

Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]

Constraints:

1 <= nums.length <= 5000
0 <= nums[i] <= 5000
*/

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100

int stack[MaxSize], top = -1;
int i, size, nums2[MaxSize];

void push(int val)
{
    if (top == size)
    {
        printf("\nStack Overflow!");
    }

    else
    {
        top++;
        stack[top] = val;
    }
}

int sortArrayByParity(int nums[])
{
    int j = 0;

    for (i = 0; i < size; i++)
    {
        if (nums[i] % 2 != 0)
            push(nums[i]);
        
        else
            nums2[j++] = nums[i];
    }

    for (i = j; i < size; i++)
    {
        nums2[i] = stack[top];
        top--;
    }

    printf("\nResult: ");
    for (i = 0; i < size; i++)
        printf("%d ", nums2[i]);
}

int main()
{
    int nums[MaxSize];

    
    printf("\n===========================================");
    printf("\nSize of the Nums[]: ");
    scanf("%d", &size);

    printf("\nNums[%d]: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    sortArrayByParity(nums);
    printf("\n===========================================\n");

    return 0;
}