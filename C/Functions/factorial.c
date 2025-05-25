#include<stdio.h>
int fact(int n)
{
    int x=1,i;
    for(i=1;i<=n;++i)
    {
        x=x*i;
    }
    printf("Factorial is:%d",x);
}
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    fact(n);
}
