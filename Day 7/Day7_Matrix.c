/*
#Array: Reshape the Matrix

In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[10][10], temp[100], result[10][10], i, j;
    int row, col, m, n, k = 0;

    system("cls");

    printf("\nEnter the size of MAT[m][n] array: ");
    scanf("%d%d", &m, &n);

    printf("\nEnter %dx%d elements: ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nMAT[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\nThe MAT[%d][%d] is: \n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    AGAIN:
    printf("\nNow Enter the size of MAT[row][col] to Re-Shape: ");
    scanf("%d%d", &row, &col);

    if (row*col != m*n)
    {
        printf("\nOops! Input a possible value to reshape!\nReshape Possible Size: %d (%d x %d)\n", m*n, m, n);
        goto AGAIN;
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                temp[k] = mat[i][j];
                k++;
            }
        }

        k = 0;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                result[i][j] = temp[k];
                k++;
            }
            
        }
        

        printf("\nThe Reshaped MAT[%d][%d] is: \n", row, col);
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}