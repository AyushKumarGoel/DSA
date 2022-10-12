#include<stdio.h>
int fibo(int n)
{
    int f[100];
    if(n==1||n==2)
        return f[n]=n-1;
    else
    {
        if(f[n]==0)
        f[n] = (fibo(n-1)+fibo(n-2));
    }
    return f[n];
}
int main()
{
    int n,a,i;
    for(i=1;i<=100;i++)
    {
        printf("%d %d\t",i,fibo(i));
    }
}
