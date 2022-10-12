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

int reversal(int a[],int size)
{
    int temp;
    for(int i=0;i<(int)(size/2);i++)
    {
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
}


int main()
{
    int a[100],b[100],size;

    size=initialization(a);
    print(a,size);

    reversal(a,size);
    print(a,size);

    return 0;
}