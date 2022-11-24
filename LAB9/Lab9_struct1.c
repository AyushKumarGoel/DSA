#include<stdio.h>
#include<string.h>
struct student1
{
    int roll_no;
    char name[30];
    int marks[7];
    float percentage;
    char eligible[3];
};
int main()
{
    struct student1 s;
    int marksindex, j, min1, min2;
    float sum = 0;

    marksindex = 0;
    printf("\nENTER YOUR ROLL NO.:");
    scanf("%d", &s.roll_no);
    printf("ENTER YOUR NAME:");
    fflush(stdin);
    gets(s.name);
    printf("ENTER YOUR ENGLISH MARKS:");
    scanf("%d", &s.marks[marksindex++]);
    printf("ENTER YOUR MATHEMATICS MARKS:");
    scanf("%d", &s.marks[marksindex++]);
    printf("ENTER YOUR PHYSICS MARKS:");
    scanf("%d", &s.marks[marksindex++]);
    printf("ENTER YOUR CHEMISTRY MARKS:");
    scanf("%d", &s.marks[marksindex++]);
    printf("ENTER YOUR COMPUTER SCIENCE MARKS:");
    scanf("%d", &s.marks[marksindex++]);
    printf("ENTER YOUR PHYSICAL EDUCATION MARKS:");
    scanf("%d", &s.marks[marksindex++]);

    min1 = __INT_MAX__;
    min2 = __INT_MAX__; // INT_MAX=+2147483647
    for (j = 0; j < 6; j++)
    {
        if (s.marks[j] < min1)
        {
            min1 = s.marks[j];
        }
    }
    for (j = 0; j < 6; j++)
    {
        if (s.marks[j] < min2 && s.marks[j] != min1)
        {
            min2 = s.marks[j];
        }
    }
    for (j = 0; j < 6; j++)
    {
        if (s.marks[j] != min2 && s.marks[j] != min1)
        {
            sum += s.marks[j];
        }
    }
    s.percentage = sum / 4.0;
    ((int)s.percentage >= 95) ? strcpy(s.eligible, "YES") : strcpy(s.eligible, "NO");

    printf("\n\nSTUDENT IS ELIGIBLE FOR DU: %s", s.eligible);
    return 0;
}
