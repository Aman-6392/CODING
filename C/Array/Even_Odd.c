#include<stdio.h>
int main()
{
    int a[1000],i,n,even=0,odd=0;
    printf("Enter no of element:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        if(a[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
        
    }
    printf("Even Number=%d\n",even);
    printf("Odd Number=%d",odd);
}