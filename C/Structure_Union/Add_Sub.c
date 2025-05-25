#include<stdio.h>
struct num
{
    int real;
    int comp;
};
int main()
{
    struct num c1,c2;
    printf("Enter Real Part of 1st: ");
    scanf("%d",&c1.real);
    printf("Enter Imaginary part of 1st: ");
    scanf("%d",&c1.comp);
    printf("Enter Real Part of 2nd: ");
    scanf("%d",&c2.real);
    printf("Enter Imaginary part of 2nd: ");
    scanf("%d",&c2.comp);
    int x,y,a,b;
    x=c1.real+c2.real;
    y=c1.comp+c2.comp;
    a=c1.real-c2.real;
    b=c1.comp-c2.comp;
    printf("Addition = %d + %di\n",x,y);
    printf("Subtraction = %d - %di",a,b);
}
