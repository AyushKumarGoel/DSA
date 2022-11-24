#include <stdio.h>
struct stu
{
    char name[10];
    int roll_num;
    int marks[5];
    int sum;
    int per;
} s[20];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        printf("enter the name of stu");
        scanf("%s", &s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_num);
        for (int i = 0; i < 3; i++)
        {
            printf("Enter marks: ");
            scanf("%dA", &s[i].marks[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            s[i].sum = sum + s[i].marks[i];
        }
        s[i].per = (s[i].sum / 300) * 100;
    }
    printf("Displaying Information:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: ");
        printf("%s", s[i].name);
        printf("\nRoll number: %d\n", s[i].roll_num);
        for (int i = 0; i < 3; i++)
        {
            printf("%d  ", s[i].marks[i]);
        }
        printf("%d\n", s[i].sum);
        printf("%d\n", s[i].per);
    }
    return 0;
}