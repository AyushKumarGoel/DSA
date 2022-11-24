#include<stdio.h>
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};

int main()
{
    struct complex c1;
    struct complex c2;
    struct complex result;

    printf("\nENTER FIRST COMPLEX NUMBER(a+ib):\n");
    scanf("%f+i(%f)",&c1.real,&c1.imag);

    printf("\nENTER SECOND COMPLEX NUMBER(a+ib):\n");
    scanf("%f+i(%f)",&c2.real,&c2.imag);

    result.real=c1.real+c2.real;    
    result.imag=c1.imag+c2.imag;

    printf("\nSUM OF TWO COMPLEX NUMBER (a+ib): (%.1f) + i(%.1f)\n\n",result.real,result.imag);
    return 0;
}
