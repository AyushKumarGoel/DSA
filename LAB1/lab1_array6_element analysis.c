#include <stdio.h>

void print(int a[],int size)
{
    printf("\nARRAY ELEMENT:\n");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
}
int initialization(int a[])
{
    int size;
    printf("\nENTER THE SIZE OF ARRAY:");
    scanf("%d",&size);
    printf("ENTER ELEMENTS:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    return size;
}

int count_element_in_array(int a[],int size)
{
    int count=0,ele,i,j,num[10],new=1,value=1;
    num[0]=a[0];
    for (i=1;i<size;i++)
    {
        count =0;
        ele=a[i];
        //printf("\n\nNEW for loop:%d",new);
        for (j=0;j<new;j++)
        {
            if (ele==num[j])
            {
                break;
            }
        }
        //printf("  j:%d",j);
        if (j==new)
        {
            num[value++]=ele;
            new++;
            //printf("\n\nNEW after ++:%d",new);
        }
    }
    
    for ( i=0;i<new;i++)
    {
        count=0;
        ele=num[i];
        //printf("\n%d\n",ele);
        
        for( j=0;j<size;j++)
        {

            if (a[j]==ele)
            {
                count++;
                //break;
            }
        }
        if (count>1)  printf("\nELEMENT:%d REPEATED COUNT:%d\n",ele,count) ;// printf("\nELEMENT:%d NO REPEATED ELEMENT\n",ele);
        
    }
    return 0;
}
int main()
{
    int a[100],b[100],size;

    size=initialization(a);
    print(a,size);
    
    count_element_in_array(a,size);

    return 0;
}