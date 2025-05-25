#include<stdio.h>
int sum(int n)
{
    int x=0;
    if(n>0)
    {
        x=x+n;
    }
    if(n!=0)
        {
            return x+sum(n-1);
        }
    else
        {
            return n;
        }
}
int main()
{
    int n;
    printf("Enter Of Terms to Sum:");
    scanf("%d",&n);
    printf("Sum=%d",sum(n));
}