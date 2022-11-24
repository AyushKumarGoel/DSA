#include<stdio.h>
#include <stdio.h>
#include <string.h>

struct customer
{
    long long acc;
    char name[30];
    int balance;
} c[100];

void print_less_than_200(int n)
{
    
    int i=0,count=0;
    while(i!=n)
    {
        if(c[i].balance<=200)
            count++;
        i++;
    }
    if (count)
    {
        printf("\n\nCUSTOMER HAVING BALANCE LESS THAN $200 :\n");
        for (i = 0; i < n; i++)
        {
            if (c[i].balance<=200)
            {
                printf("%17lld", c[i].acc);
                printf("%19s", c[i].name);
                printf("%9d ", c[i].balance);
                
            }
        }
    }
    else
    {
        printf("\nNO CUSTOMER EXIST HAVING BALANCE LESS THAN $200 !!!\n\n");
    }
}

void increment(int n)
{
    
    int i=0;
    printf("\n\nCUSTOMER DETAILS AFTER INCREMENT IN BALANCE:\n");
    for (i = 0; i < n; i++)
    {
        if (c[i].balance >= 1000)
        {
            c[i].balance = c[i].balance + 100;
            printf("%17lld", c[i].acc);
            printf("%19s", c[i].name);
            printf("%9d ", c[i].balance);
            
        }
    }
}
void print_more_than_1000(int n)
{
    
    int i=0,count=0;
    while(i!=n)
    {
        if(c[i].balance>=1000)
            count++;
        i++;
    }
    if (count)
    {
        printf("\n\nCUSTOMER HAVING BALANCE MORE THAN $1000 :\n");
        for (i = 0; i < n; i++)
        {
            if (c[i].balance>=1000)
            {
                printf("%17lld", c[i].acc);
                printf("%19s", c[i].name);
                printf("%9d ", c[i].balance);
                
            }
        }
        increment(n);
    }
    else
    {
        printf("\nNO CUSTOMER EXIST HAVING BALANCE MORE THAN $1000 !!!\n\n");
    }
}

int main()
{
    int i, n;

    printf("NUMBER OF DATA WANT TO ENTER:");
    scanf("%d", &n);

    // n = 10;   rakhna hai is question ke liye

    for (i = 0; i < n; i++)
    {
        printf("\n\nENTER YOUR ACCOUNT NO.:");
        scanf("%lld", &c[i].acc);
        printf("ENTER YOUR NAME:");
        fflush(stdin);
        gets(c[i].name);
        printf("ENTER YOUR BALANCE(IN $):");
        scanf("%d", &c[i].balance);

        printf("\nSUCCESSFULLY ADDED RECORD");
    }
    print_less_than_200(n);
    print_more_than_1000(n);
    return 0;
}
