#include<stdio.h>

int main()
{

    int m,n;
    int a[10][10],b[10][10],c[10][10];
    printf("\nEnter number of rows : ");
    scanf("%d",&m);
    printf("\nEnter number of columns : ");
    scanf("%d",&n);

    //input

    printf("\nEnter elements of matrix 1 \n");
    for(int i=0;i<m;i++)
    {
        printf("\nEnter element of row %d ",i+1);
        for(int j=0;j<n;j++)
        {
            printf("\nEnter element of column %d : ",j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2 \n");
    for(int i=0;i<m;i++)
    {
        printf("\nEnter element of row %d ",i+1);
        for(int j=0;j<n;j++)
        {
            printf("\nEnter element of column %d : ",j+1);
            scanf("%d",&b[i][j]);
        }
    }

    //print matrix
    printf("Matrix 1 : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //subtraction
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    //print subtraction

    printf("Difference of Matrix (1-2) : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}