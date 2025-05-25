#include<stdio.h>
int power(int a,int b)
{
    if(b == 0)
    {
    return 1;
    }
    else
    {
    return a * power(a, b-1);
    }
}
int main()
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter Value of Power b:");
    scanf("%d",&b);
    printf("a to power b is %d",power(a,b));
}