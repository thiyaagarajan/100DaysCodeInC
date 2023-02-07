/*
1) Asked in Mindtree

Write a C program for the following Pattern for n=5 (carefully look at the order)
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int pattern[50], n, row, col, count = 1, temp;

    // system("cls");

    //Getting No. of rows
    printf("\nEnter the count. of rows wanted to be printed: ");
    scanf("%d", &n);

    //Spacings
    printf("\n");   

    for (row = 1; row <= n; row++)
    {
        //This condition is for printing reverse order in even rows
        if (row % 2 == 0)
        {
            //Temp variable is for not affecting count variable
            temp = count;
            temp += row - 1;
        }

        for (col = 1; col <= row; col++)
        {
            //Print in Correct Order
            if(row % 2 != 0)
            {
                //To check if no is last value in row, not to print *
                if(col == row)
                    printf("%d", count);
                else
                    printf("%d*", count);
            }

            //Print in Reverse Order
            else
            {
                //To check if no is last value in row, not to print *
                if(col == row)
                    printf("%d", temp);
                else
                    printf("%d*", temp);
                //Decrementing to print in reverse order
                temp--;
            }
            count++;
        }
        printf("\n");
    }
    
}