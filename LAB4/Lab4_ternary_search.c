
#include <stdio.h>
int ter_search(int a[],int x,int l , int r)
{
    int mid1 = l + ((r-l)/3); 
    int mid2 = r - ((r-l)/3) ;
    if(r - l >= 1)
    {
        if(a[mid1]==x)
        return mid1;
        else if(a[mid2] == x)
        return mid2;
        else if(a[mid1]>x)
        ter_search(a,x,l,mid1 -1);
        else if(a[mid1] < x && a[mid2]>x)
        ter_search(a,x,mid1+1,mid2 -1);
        else if(a[mid2]<x)
        ter_search(a,x,mid2+1,r);
    }
    return -1;
}
int main()
{
    int a[10] ;
    int n,x,l,r,b;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be seach");
    scanf("%d",&x);
    b = ter_search(a,x,0,n-1);
    printf("%d",b);
    return 0;
}
