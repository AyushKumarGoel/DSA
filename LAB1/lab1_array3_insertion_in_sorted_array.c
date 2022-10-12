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

int insert_in_sort(int a[],int *size)
{
    int index,ele;
    printf("\nENTER ELEMENT TO INSERT:");
    scanf("%d",&ele);
    for (int i=0;i<*size;i++)
    {
        if (a[i]>ele)
        {
            for (int j=*size;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=ele;
            break;
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

    insert_in_sort(a,&size);
    print(a,size);

    return 0;
}