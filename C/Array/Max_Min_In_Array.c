#include<stdio.h>
int main()
{
    int a[1000],i,n,min,max;
    printf("Enter no of element:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[1];
    for(i=0;i<n;++i)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("Max=%d",max);
    printf("Min=%d",min);
}