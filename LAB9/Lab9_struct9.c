#include <stdio.h>
#include <stdio.h>
struct student
{
    int roll, age;
    char name[20], address[50];
};

void age14(struct student a[])
{
    for (int i = 0; i < 15; i++)
    {
        if (a[i].age == 14)
            printf("\n%s", a[i].name);
    }
}
void even_roll(struct student s)
{
    for (int i = 0; i < 15; i++)
    {
        if (s[i].roll % 2 == 0)
            printf("\n%s", s[i].name);
    }
}

void user_choice(struct student s)
{
    int x;
    printf("\nEnter roll number : ");
    scanf("%d",&x--);
    printf("\nName : ", s[x].name);
    printf("\nAge : ", s[x].age);
    printf("\nAddress : ", s[x].address);
}

int main()
{
    /*9. Write a structure to store the roll no., name, age (between 11 to 14)
    and address of students (more than 10). Store the information of the students.
    - Write a function to print the names of all the students having age 14.
    - Write another function to print the names of all the students having even roll no.
    - Write another function to display the details of the student whose roll no is given
    (i.e. roll no. entered by the user).*/

    struct student a[15];

    for (int i = 0; i < 15; i++)
    {
        a[i].roll = i + 1;
        printf("\n\nEnter details of student : Roll no. - %d", a[i].roll);
        printf("\nEnter name : ");
        scanf("%s", &a[i].name);
        printf("\nEnter age : ");
        scanf("%d", &a[i].age);
        printf("\nEnter address : ");
        scanf("%s", &a[i].address);
    }
    age14(a); // passing structure a as an argument
    return 0;
}
