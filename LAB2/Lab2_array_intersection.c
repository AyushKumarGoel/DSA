#include <stdio.h>
int main()
{
    int a[10], b[10], c[20];
    int n1, n2;
    printf("enter the limit of array_1");
    scanf("%d", &n1);
    printf("enter the limit of array_2");
    scanf("%d", &n2);
    printf("\nenter the element of array 1:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nenter the element of array_2:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            c[k] = a[i];
            i++;
            k++;
            j++;
        
        }
    }
    printf("\nOUTPUT\n");
    for (int a = 0; a < k; a++)
    {
        printf("%d", c[a]);
    }
    return 0;
}