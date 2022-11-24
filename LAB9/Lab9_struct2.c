#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    int age;
    int marks[100][7];
};
int main()
{
    struct student s[100];
    int i, n, marksindex, j;
    printf("NUMBER OF DATA WANT TO ENTER:");
    scanf("%d", &n);

    // n = 1;
    
    for (i = 0; i < n; i++)
    {
        marksindex = 0;
        printf("\n\nENTER YOUR ROLL NO.:");
        scanf("%d", &s[i].roll_no);
        printf("ENTER YOUR NAME:");
        fflush(stdin);
        gets(s[i].name);
        printf("ENTER YOUR AGE:");
        scanf("%d", &s[i].age);
        printf("ENTER YOUR ENGLISH MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
        printf("ENTER YOUR MATHEMATICS MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
        printf("ENTER YOUR PHYSICS MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
        printf("ENTER YOUR CHEMISTRY MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
        printf("ENTER YOUR COMPUTER SCIENCE MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
        printf("ENTER YOUR PHYSICAL EDUCATION MARKS:");
        scanf("%d", &s[i].marks[i][marksindex++]);
    }

    printf("\n\nSTUDENT DATA:\n");
   
    for (i = 0; i < n; i++)
    {
        marksindex = 0;
        printf("%14d", s[i].roll_no);
        printf("%19s", s[i].name);
        printf("%11d",s[i].age);
        printf("%10d", s[i].marks[i][marksindex++]);
        printf("%11d", s[i].marks[i][marksindex++]);
        printf("%14d", s[i].marks[i][marksindex++]);
        printf("%11d", s[i].marks[i][marksindex++]);
        printf("%19d", s[i].marks[i][marksindex++]);
        printf("%21d\n", s[i].marks[i][marksindex++]);
    }
    return 0;
}
