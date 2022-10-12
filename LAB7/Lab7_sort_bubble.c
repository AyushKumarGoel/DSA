#include<stdio.h>
int bubble_sort(int a[],int n)
{
    int c[10];
    int i,temp,flag;
    for(i=1;i<n && flag==1;i++)
        {
            flag=0;
            for(int j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j] = a[j+1];
                    a[j+1]= temp;
                }
                flag=1;
            }
            printf("num of steps %d",i);
        }
    printf("\nRESULT\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}
int main()
{
    int a[10] ;
    int n,x,flag,c,b;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    return 0;
}