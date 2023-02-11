
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[10][10], i, j, row, col, count, k;

    system("cls");

    printf("\nEnter the size of MAT[row][col] array: ");
    scanf("%d%d", &row, &col);

    if (row != 0 || col != 0)
    {
        printf("\nEnter %dx%d elements: ", row, col);
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("\nMAT[%d][%d] = ", i, j);
                scanf("%d", &mat[i][j]);
            }
        }

        printf("\n\nThe MAT[%d][%d] is: \n", row, col);
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
    }
    
    if (row == 0)
        printf("\nNo row present!");
        

    else if (row == 1)
        printf("\nOnly single row is present!");
        

    else
        printf("\nCommon Elements of MAT[%d][%d] are = ", row, col);
        for (i = 0; i < col; i++)
        {
            count = 0;
            for (j = 0; j < row - 1; j++)
            {
                for (k = 0; k < col; k++)
                {
                    if (mat[0][i] == mat[j + 1][k])
                        count++;
                }
            }
            if (count + 1 >= row)
            {
                printf(" %d", mat[0][i]);
            }
        }

    printf("\n");

    return 0;
}