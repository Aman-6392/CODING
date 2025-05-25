#include<stdio.h>
void main()
{
    int a=5,b=2,temp;
    printf("\na=%d\n",a);
    printf("\nb=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped Value of a is %d\n\n",a);
    printf("Swapped Value of b is %d\n\n",b);
}