#include <stdio.h>
int multiply_two_matrix();
int main()
{
    int row1, col1, row2, col2, a[10][10], b[10][10], multiply[10][10], i, j, k,l;
    printf("ENTER THE NUMBER OF ROWS FOR 1st MATRIX: ");
    scanf("%d", &row1);
    printf("ENTER THE NUMBER OF COLUMNS FOR 1st MATRIX: ");
    scanf("%d", &col1);

    printf("\nENTER ELEMENTS OF 1st MATRIX:\n");
    for (i = 0; i < row1; ++i)
        for (j = 0; j < col1; ++j)
        {
            printf("ENTER ELEMENT a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < row1; ++i)
    {
        printf("\n");
        for (j = 0; j < col1; ++j)
        {
            printf("%d   ", a[i][j]);
        }
    }
    printf("\n\nENTER THE NUMBER OF ROWS FOR 2nd MATRIX: ");
    scanf("%d", &row2);
    printf("ENTER THE NUMBER OF COLUMNS FOR 2nd MATRIX: ");
    scanf("%d", &col2);

    if (col1 == row2)
    {

        printf("ENTER ELEMENTS OF 2nd MATRIX:\n");
        for (i = 0; i < row2; ++i)
            for (j = 0; j < col2; ++j)
            {
                printf("ENTER ELEMENT b%d%d: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }

        for (i = 0; i < row2; ++i)
        {
            printf("\n");
            for (j = 0; j < col2; ++j)
            {
                printf("%d   ", b[i][j]);
            }
        }
        for (i = 0; i < row1; ++i)
            for (j = 0; j < col2; ++j)
            {
                multiply[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    multiply[i][j] = multiply[i][j] + a[i][k] * b[k][j];
                }
            }

        printf("\n\nMULTIPLICATION OF TWO MATRICES: \n");
        printf("------");
        for (l = 1; l < col2; l++)
        {
            printf("-----");
        }
        for (i = 0; i < row1; ++i)
        {
            printf("\n|");
            for (j = 0; j < col2; ++j)
            {
                printf("%-2d  |", multiply[i][j]);
            }
            printf("\n------");
            for (l = 1; l < col2; l++)
            {
                printf("-----");
            }
        }
    }
    else
    {
        printf("\nMULTIPLICATION OF THESE MATRIX IS NOT POSSIBLE.");
    }
    return 0;
}