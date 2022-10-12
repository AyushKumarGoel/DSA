//sum of the digit of a number
#include<stdio.h>
int sum_digit(int n)
{
    int sum =0;
    while(n%10!=0)
    {
        sum = sum + n%10;
        n=n/10; 
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum_digit(n));
}