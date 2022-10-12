#include <stdio.h>
#define size 3
void initial(int a[][size],int row,int col)
{
    printf("ENTER ELEMENTS OF ARRAY:\n");
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void trans(int a[][size],int row,int col)
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if (i+j<i+i)
                swap(&a[j][i],&a[i][j]);
        }
    }
}

int main()
{
    int a[size][size],row,col;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&row);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&col);
    initial(a,row,col);
    trans(a,row,col);
    printf("MATRIX AFTER TRANSPOSE: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}