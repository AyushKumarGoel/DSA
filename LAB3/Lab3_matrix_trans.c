#include <stdio.h>

int main()
{
    int m, n;
    int a[10][10];
    printf("\nEnter number of rows : ");
    scanf("%d", &m);
    printf("\nEnter number of columns : ");
    scanf("%d", &n);
    printf("\nEnter elements of matrix \n");
    for (int i = 0; i < m; i++)
    {
        printf("\nEnter element of row %d ", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("\nEnter element of column %d : ", j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("Transpose Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}