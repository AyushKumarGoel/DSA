#include <stdio.h>
int bin_search(int a[],int x,int strt , int end)
{
    int j,flag;
    int mid = (strt+end) / 2;
    if(end - strt >= 1)
    {
        if(a[mid]==x)
        return mid;
        else if(a[mid] > x)
        bin_search(a,x,strt,mid-1);
        else if(a[mid] < x)
        bin_search(a,x,mid+1,end);
    }
    return -1;
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
    printf("enter the element to be seach");
    scanf("%d",&x);
    b = bin_search(a,x,0,n-1);
    printf("%d",b);
    return 0;
