#include <stdio.h>
struct stu
{
    char name[10];
    int roll_num;
    int marks[10];
} s[10];
int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the name of stu");
        scanf("%s", &s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_num);
        for (int i = 0; i < 5; i++)
        {
            printf("Enter marks: ");
            scanf("%d", &s[i].marks[i]);
        }
    }
    printf("Displaying Information:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("name");
        printf("%s\n", s[i].name);
        printf("roll number: ");
        printf("%d\n", s[i].roll_num);
        for (int i = 0; i < 5; i++)
        {
            printf("Enter marks: ");
            printf("%d\n", s[i].marks[i]);
        }
    }
    return 0;
}