#include<stdio.h>
int fact(int n,int p)
{
    int f=1;
    for(int i=1;i<=p;i++)
    {
        f=n*f;
    }
    return f;
}
int main()
{
    int n,a,p;
    printf("enter the num");
    scanf("%d",&n);
    printf("enter the pow");
    scanf("%d",&p);
    a= fact(n,p);
    printf("%d",a);
}