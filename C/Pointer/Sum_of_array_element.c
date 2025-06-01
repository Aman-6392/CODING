#include<stdio.h>
int main()
{
    int n,*p,sum=0,i,a[100];
    printf("Enter Size of Array:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        p=&sum;
        *p+=a[i];
    }
    printf("Sum = %d",*p);
}