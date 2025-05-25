#include<stdio.h>
void main()
{
    int a=5,b=2;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nSwapped Value of a is %d\n\n",a);
    printf("\n\nSwapped Value of b is %d\n\n",b);
}