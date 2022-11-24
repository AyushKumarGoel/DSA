#include<stdio.h>
#include <stdio.h>

struct date 
{
    int day;
    int month;
    int year;
}d1,d2;

void main()
{
    int day,year,month;

    printf("ENTER ANY DATE(dd/mm/yyyy):");
    scanf("%d/%d/%d",&d1.day,&d1.month,&d1.year);

    printf("ENTER ANY DATE(dd/mm/yyyy):");
    scanf("%d/%d/%d",&d2.day,&d2.month,&d2.year);

    if (d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
    {
        printf("\nDATES ARE EQUAL");
    }
    else
    {
        printf("\nDATES ARE NOT EQUAL");
    }
    return 0;
}
