#include<stdio.h>
#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int sec;
};

int main()
{
    struct time t1;
    struct time t2;
    struct time result;

    printf("ENTER FIRST TIME (HOUR:MINUTE:SECOND): ");
    scanf("%d:%d:%d",&t1.hour,&t1.minute,&t1.sec);
    printf("ENTER SECOND TIME (HOUR:MINUTE:SECOND): ");
    scanf("%d:%d:%d",&t2.hour,&t2.minute,&t2.sec);
    result.hour=t1.hour+t2.hour;
    result.minute=t1.minute+t2.minute;
    result.sec=t1.sec+t2.sec;

    while (result.sec>=60)
    {
        result.sec=result.sec-60;
        ++(result.minute);
        while (result.minute>=60)
        {
            result.minute=result.minute-60;
            ++(result.hour);
        }
    }
    
    printf("SUM OF TWO TIMES: %d:%d:%d",result.hour,result.minute,result.sec);
    return 0;
}
