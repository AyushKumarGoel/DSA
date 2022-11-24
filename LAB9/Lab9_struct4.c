#include<stdio.h>
#include <stdio.h>
struct distance
{
    float inch;
    float feet;
};

int main()
{
    struct distance d1;
    struct distance d2;
    struct distance result;

    printf("ENTER FIRST DISTANCE:\n");
    printf("ENTER FEET:");
    scanf("%f",&d1.feet);
    printf("ENTER INCH:");
    scanf("%f",&d1.inch);

    printf("\nENTER SECOND DISTANCE:\n");
    printf("ENTER FEET:");
    scanf("%f",&d2.feet);
    printf("ENTER INCH:");
    scanf("%f",&d2.inch);

    result.feet=d1.feet+d2.feet;    
    result.inch=d1.inch+d2.inch;

    while (result.inch>=12)
    {
        result.inch=result.inch-12;
        result.feet++;
    }

    printf("\nSUM OF DISTANCES: %0.0f feet and %0.1f inch (%.0f\' - %.1f\")\n\n",result.feet,result.inch,result.feet,result.inch);
    return 0;
}
