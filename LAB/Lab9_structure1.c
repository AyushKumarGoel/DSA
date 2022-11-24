#include<stdio.h>
struct stu
{
    char name[10];
    int roll_num;
    int marks[10];
}s;
int main()
{
    int sum=0;
    printf("enter the name of stu");
    scanf("%s",&s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_num);
    for(int i=0;i<6;i++)
    {
        printf("Enter marks: ");
        scanf("%dA", &s.marks[i]);
    }
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("\nRoll number: %d\n", s.roll_num);
    for(int i=0;i<6;i++)
    {
        printf("%d", s.marks[i]);
        printf("\n");
    }
    for(int i=0;i<6;i++)
    {
        sum=sum+s.marks[i];
    }
    int min;
    min=s.marks[0];
    for(int i=0;i<6;i++)
    {
        if(s.marks[i]<s.marks[0])
            min=s.marks[i];
    }
    sum=sum-min;
    printf("%d\n",sum);
    int mi;
    mi=100;
    for(int i=0;i<6;i++)
    {
        if(s.marks[i]<s.marks[0] && s.marks[i]!=min)
            mi=s.marks[i];
    }
    sum=sum-mi;
    printf("%d\n",sum);
    int per;
    per = (sum/60)*100;
    if(per>=95)
    {
        printf("elligible");
    }
    else
        printf("not");
    return 0;
}