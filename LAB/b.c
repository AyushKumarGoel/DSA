#include<bits/stdc++.h>
using namespace std;

int max(int n)
{   int max=0;
    while(n!=0)
    {
        if(max<n%10)
            max=n%10;
        n=n/10;
    }
    return max;
}
int min(int n)
{   int min=9;
    while(n!=0)
    {
        if(min>n%10)
            min=n%10;
        n=n/10;
    }
    return min;
}
int a(int n,int a1)
{
    if(n=1)
        return a1;
    else
        return a(n-1,a1)+min(a(n-1,a1))+max(a(n-1,a1));
}
int main()
{
    int t,a1,k;
    while(t--)
    {

        cin>>a1>>k;
        cout<<a(k,a1);

    }

    return 0;
}
