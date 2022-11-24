#include<stdio.h>
#include <stdio.h>
struct complex
{
    float real;
    float imag;
}c1,c2,add,subtract,multiply;

int main()
{
    printf("\nENTER FIRST COMPLEX NUMBER(a+ib):\n");
    scanf("%f+i(%f)",&c1.real,&c1.imag);

    printf("\nENTER SECOND COMPLEX NUMBER(a+ib):\n");
    scanf("%f+i(%f)",&c2.real,&c2.imag);

    add.real=c1.real+c2.real;    
    add.imag=c1.imag+c2.imag;
    printf("\nSUM OF TWO COMPLEX NUMBER (a+ib)+(c+id): (%.1f) + i(%.1f)\n\n",add.real,add.imag);

    subtract.real = c1.real - c2.real;
    subtract.imag = c1.imag - c2.imag;
    printf("\nSUBTRACTION OF TWO COMPLEX NUMBER (a+ib)-(c+id): (%.1f) + i(%.1f)\n\n",subtract.real,subtract.imag);

    // MULTIPLY TWO COMPLEX NUMBER: (a+ib)(c+id) =(ac-bd) + i(ad + bc)

    multiply.real = c1.real*c2.real - c1.imag*c2.imag;
    multiply.imag = c1.real*c2.imag + c1.imag*c2.real;
    printf("\nMULTIPLICATION OF TWO COMPLEX NUMBER (a+ib)*(c+id): (%.1f) + i(%.1f)\n\n",multiply.real,multiply.imag);
    return 0;
}
