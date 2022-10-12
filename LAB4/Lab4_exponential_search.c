#include <stdio.h>
#include<math.h>
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
int expo_search(int a[],int n,int x)
{
    if(a[0]==x)
        return 0;
    int i=1;
    while(i<n && x<a[i])
        i = i*2; 
    return bin_search(a,x,i/2,i);
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
    b = expo_search(a,n,x);
    printf("%d",b);
    return 0;
}
