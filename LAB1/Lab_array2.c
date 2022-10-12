#include <stdio.h>

void print(int a[],int size)
{
    printf("\nARRAY ELEMENT:\n");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
}
int initialization(int a[])
{
    int size;
    printf("\nENTER THE SIZE OF ARRAY:");
    scanf("%d",&size);
    printf("ENTER ELEMENTS:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    return size;
}

int insertion(int a[],int *size)
{
    int index,ele;
    printf("\nENTER ELEMENT TO INSERT AND INDEX:");
    scanf("%d%d",&ele,&index);
    for (int i=0;i<*size;i++)
    {
        if (i==index)
        {
            for (int j=*size;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=ele;
        }
    }
     (*size)++;
     return 0;
}
int main()
{
    int a[100],b[100],size;

    size=initialization(a);
    print(a,size);
    
    insertion(a,&size);
    print(a,size);
    
    return 0;
}