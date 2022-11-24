/*13. Let us work on the menu of a library. 
Create a structure containing book information like accession number,
 name of author, book title and flag to know whether book is issued or not.
  Create a menu in which the following can be done.
 1 - Display book information
 2 - Add a new book
 3 - Display all the books in the library of a particular author
 4 - Display the number of books of a particular title
 5 - Display the total number of books in the library
 6 - Issue a book
 (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

static int total_books=0;

struct library 
{
    char book_title[50],author[20];
    int book_id,flag;
};

void display(struct library a[])
{
    system("cls");
    int x;
    printf("\nEnter book id : ");
    scanf("%d",&x);
    for(int i=0;i<total_books;i++)
        if(a[i].book_id==x)
        {
            printf("\nBook Title : %s",a[i].book_title);
            printf("\nAuthor : %s ",a[i].author);
            if(a[i].flag)
                printf("\nIt is issued already");
            else
                printf("\nAvailable to issue");
            
            break;
        }
}

void add(struct library a[])
{
    system("cls");
    printf("\nEnter book id : ");
    scanf("%d",&a[total_books].book_id);
    printf("\nEnter book title : ");
    scanf("%s",a[total_books].book_title);
    printf("\nEnter author name : ");
    scanf("%d",&a[total_books].author);
    a[total_books].flag=0;
    total_books++;
    printf("\nBook added succesfully ");
}

void display_all(struct library a[])
{
    system("cls");
    char x[20];
    printf("\nEnter author name : ");
    scanf("%s",x);
    for(int i=0;i<total_books;i++)
        if(strcmp(x,a[i].author)==0)
            printf("\nBook Title : %s",a[i].book_title);
}

void display_numberofbooks(struct library a[])
{
    system("cls");
    int count=0;
    char x[20];
    printf("\nEnter book title : ");
    scanf("%s",x);
    for(int i=0;i<total_books;i++)
        if(strcmp(x,a[i].book_title)==0 && a[i].flag==0)
            count++;
    printf("\nTotal no of books with title %s are %d",x,count);
}

void display_total_numberofbooks(struct library a[])
{
    system("cls");
    int count=0;
    for(int i=0;i<total_books;i++)
        if( a[i].flag==0)
            count++;
    printf("\nTotal number of books in the library are %d",count);
}

void issue(struct library a[])
{
    system("cls");
    int x;
    int count;
    printf("\nEnter book id : ");
    scanf("%d",&x);
    for(int i=0;i<total_books;i++)
    {
         if(a[i].book_id==x&&a[i].flag==0)
        {
            a[i].flag=1;
            break;
        }
    }
    printf("\nBook issued Succesfully");
}

int main()
{
    struct library a[100];
    int i=0;
    
    while(1)
    {
        system("cls");
        printf("\n\n    Enter your choice ");
        printf("\n1 - Display book information");
        printf("\n2 - Add a new book");
        printf("\n3 - Display all the books in the library of a particular author");
        printf("\n4 - Display the number of books of a particular title");
        printf("\n5 - Display the total number of books in the library");
        printf("\n6 - Issue a book");
        printf("\n7 - Exit\n");
        scanf("%d",&i);

        switch (i)
        {
            case 1:
                display(a);
                break;
            case 2:
                add(a);
                break;
            case 3:
                display_all(a);
                break;
            case 4:
                display_numberofbooks(a);
                break;
            case 5:
                display_total_numberofbooks(a);
                break;
            case 6:
                issue(a);
                break;
            case 7:
                exit(0);
                break;
            
            default:
                printf("\nWrong Choice ");
                printf("\nPress any key to continue");
                getch();
                break;
        }
    }
}
