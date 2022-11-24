#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    int age;
    char address[100];
};
int main()
{
    struct student s[100];
    int i, n;
    printf("NUMBER OF DATA WANT TO ENTER:");
    scanf("%d", &n);

    // n = 1;
    
    for (i = 0; i < n; i++)
    {
        printf("\n\nENTER YOUR ROLL NO.:");
        scanf("%d", &s[i].roll_no);
        printf("ENTER YOUR NAME:");
        fflush(stdin);
        gets(s[i].name);
        printf("ENTER YOUR AGE:");
        scanf("%d", &s[i].age);
        printf("ENTER YOUR ADDRESS:");
        fflush(stdin);
        gets(s[i].address);
    
    }

    for (i = 0; i < n; i++)
    {
        printf("%14d", s[i].roll_no);
        printf("%19s", s[i].name);
        printf("%5d ",s[i].age);
        printf("%26s", s[i].address);
    }
    return 0;
}
