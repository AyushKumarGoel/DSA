#include <stdio.h>
int lin_search(int a[], int n, int x)
{
    int j,flag;
    for(j=0;j<n;j++)
    {
        if(a[j]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("element is at %d",j);
    }
    else
        printf("ele not found");    
}
int main()
{
    int a[10] ;
    int n,x,flag,c,j;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be seach");
    scanf("%d",&x);
    lin_search(a,n,x);
    return 0;    
}
