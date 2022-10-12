#include <stdio.h>
#define size 5
void initial(int a[][size], int row, int col)
{
    printf("ENTER ELEMENTS OF ARRAY:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void cofactor(int a[][size], int row, int col, int n, int work[][size])
{
    int i = 0, j = 0, r, c;

    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            if (r != row && c != col)
            {
                work[i][j++] = a[r][c];
            }
            if (j == n - 1)
            {
                j = 0;
                i++;
            }
        }
    }
}
int determinant(int a[][size], int n)
{
    int work[size][size];
    int d = 0, i, sign = 1;
    if (n == 1)
        return a[0][0];

    for (i = 0; i < n; i++)
    {
        cofactor(a, 0, i, n, work);
        d = d + (sign * a[0][i] * determinant(work, n - 1));
        sign = -sign;
    }
    return d;
}
int main()
{
    int a[size][size], row, col, d;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d", &row);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d", &col);
    initial(a, row, col);
    d = determinant(a, row);
    printf("DETERMINANT OF GIVEN MATRIX:%d", d);
    return 0;
}