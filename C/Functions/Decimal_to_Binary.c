#include<stdio.h>
int binary(int n)
{
    int i,a[100];
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    binary(n);
}