#include<stdio.h>
int fact(int n)
{
    int f=1;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            f=f*(i);
        }
        return f;
    }
}
int main()
{
    int n,a;
    printf("enter the num");
    scanf("%d",&n);
    a= fact(n);
    printf("%d",a);
}