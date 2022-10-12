#include <stdio.h>
#include<math.h>
int jump_search(int a[],int n,int x)
{
    int i=0;
    int m;
    m=sqrt(n);
    while(i<n && x>a[i])
    {
        i=i+m;
    }
    if(i<n)
    {
        if(a[i]==x)
        return i;
        else
        {
            int strt = i-m+1;
            int end = i-1;
            for(int j= strt;j<end;j++)
            {
                if(x==a[j])
                {
                    return j;
                }
            }
            return-1;
        }
    }
    else
    {
        return -1;
    }

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
    b = jump_search(a,n,x);
    printf("%d",b);
    return 0;
}
