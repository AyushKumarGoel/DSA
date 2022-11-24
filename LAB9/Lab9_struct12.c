#include <stdio.h>
#include <stdio.h>
#include <string.h>

struct company
{
    char name[30];
    int salary;
    int hour;
} c[100];

void increment(int n)
{
    int i = 0;
    printf("\n\nEMPLOYEE DETAILS AFTER INCREMENT IN SALARY :\n");
    for (i = 0; i < n; i++)
    {
        if (c[i].hour >= 8)
        {
            c[i].salary += 50;
            printf("%18s ", c[i].name);
            printf("%6d   ", c[i].salary);
            printf("%13d          ", c[i].hour);
        }
    }
}
void print(int n)
{
    int i = 0, count = 0;
    while (i != n)
    {
        if (c[i].hour >= 8)
            count++;
        i++;
    }
    if (count)
    {
        printf("\n\nEMPLOYEE DETAILS HAVING WORKING HOUR MORE THAN 8 HOURS :\n");
        for (i = 0; i < n; i++)
        {
            if (c[i].hour >= 8)
            {
                printf("%18s ", c[i].name);
                printf("%6d   ", c[i].salary);
                printf("%13d          ", c[i].hour);
            }
        }
        increment(n);
    }
    else
    {
        printf("\nNO EMPLOYEE EXIST HAVING WORKING HOUR MORE THAN 8 HOUR !!!\n\n");
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
        printf("\n\nENTER YOUR NAME:");
        fflush(stdin);
        gets(c[i].name);
        printf("ENTER YOUR SALARY(IN $):");
        scanf("%d", &c[i].salary);
        printf("ENTER YOUR WORKING HOUR PER DAY:");
        scanf("%d", &c[i].hour);

        printf("\nSUCCESSFULLY ADDED RECORD");
    }
    print(n);
    return 0;
}
