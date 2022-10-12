#include <stdio.h>
int main()
{
    int a[10],i,n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    printf("ENTER ELEMENTS:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTERED ELEMENT:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}