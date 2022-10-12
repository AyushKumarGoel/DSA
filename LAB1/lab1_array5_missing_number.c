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

int calculate_difference(int a[],int size)
{
    int num[size-1];
    for (int i=0;i<size-1;i++)
    {
        num[i]=a[i+1]-a[i];
    }
    for (int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            if (num[i]==num[j])
            {
                return num[i];
            }
        }
    }
}
int missing_number(int a[],int size)
{
    int d,sum_actual=0,sum_expected=a[0],ele;
    d=calculate_difference(a,size);
    for (int i=0;i<size;i++)
    {
        sum_expected=sum_expected+(a[0]+((i+1)*d));
        sum_actual=sum_actual + a[i];
    }
    ele=sum_expected-sum_actual;
    //printf("\nMISSING ELEMENT: %d \ndifference: %d  sum_expected:%d actual_sum:%d\n",ele,d,sum_expected,sum_actual);
    return 0;
}

int main()
{
    int a[100],b[100],size;

    size=initialization(a);
    print(a,size);
    
    missing_number(a,size);
    
    return 0;
}