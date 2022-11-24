#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct stack
{
    char arr[20];
    int top;
}*s;
void create(struct stack *s1)
{
    s1->top=-1;
}
bool empty(struct stack *s1)
{
    return (s1->top==-1);
}
int pop(struct stack *s1)
{
        char c=s1->arr[s1->top];
        s1->top=s1->top-1;
        return c;
}
void push(struct stack *s1,char item)
{
        s1->top=s1->top+1;
        s1->arr[s1->top]=item;
}
int main()
{
    char str[100];
    int i=0;
    char x;
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    printf("ENTER THE STRING TO BE REVERSED\n");
    fflush(stdin);
    gets(str);
    while(str[i]!='\0')
    {
        push(s,str[i]);
        i++;
    }
    while(!empty(s))
    {
        x=pop(s);
        printf("%c",x);
    }
}    



// #include <stdio.h>  
// #include <string.h>  
  
// #define max 100  
// int top,stack[max];  
  
// void push(char x){  
  
//       // Push(Inserting Element in stack) operation  
//       if(top == max-1){  
//           printf("stack overflow");  
//       }  else {  
//           stack[++top]=x;  
//       }  
  
// }  
  
// void pop(){  
//     // Pop (Removing element from stack)  
//       printf("%c",stack[top--]);  
// }  
  
  
// main()  
// {  
//    char str[]="sri lanka";  
//    int len = strlen(str);  
//    int i;  
  
//    for(i=0;i<len;i++)  
//         push(str[i]);  
  
//    for(i=0;i<len;i++)  
//       pop();  
// } 