#include<stdio.h>
int main()
{
    int a[1000],i,n,pos=0,neg=0,zer=0;
    printf("Enter no of element:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        if(a[i]>0)
        {
            pos=pos+1;
        }
        else if(a[i]<0)
        { 
            neg=neg+1;
        }
        else
        {
            zer=zer+1;
        }
        
    }
    printf("Positive Number=%d\n",pos);
    printf("Negative Number=%d\n",neg);
    printf("Number of Zero=%d",zer);
}