/*
#Search Insert Position (LEET CODE)

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/

#include <stdio.h>

int a[100], b[100], n, i, search;

void fitAtPosition()
{
    int j = 0;

    if (a[0] > search)
    {
        b[0] = search;
        printf("\nElement inserted at 0 index!\n");
        j--;
    }

    else if (a[n - 1] < search)
    {
        b[n] = search;
        printf("\nElement inserted at %d index!\n", n);
    }
    
    for (i = 0; i < n; i++)
    {
        if (search > a[i] && search < a[i + 1])
        {
            b[j] = a[i];
            b[j + 1] = search;
            printf("\nElement inserted at %d index!\n", j + 1);
            j++;
        }
        else
            b[j] = a[i];

        j++;
    }

    // printf("\nArray[%d]: [ ", n);
    // for (i = 0; i < n + 1; i++)
    //     printf("%d ", b[i]);
    // printf("]\n");       
}

void display()
{
    printf("\nArray[%d]: [ ", n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("]\n");
}

int main()
{
    int flag = 0;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    display();

    printf("\nEnter the search element: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            printf("\n%d found at %d index!\n", search, i);
            flag++;
            break;
        }
    }
    if (flag == 0)
        fitAtPosition();

    return 0;
}