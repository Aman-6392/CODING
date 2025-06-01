#include<stdio.h>
void main()
{
    int n,i;
    float sum=0,x;
    printf("Enter The Number of Element:");
    scanf("%d",&n);
    printf("\n\nEnter The %d Elements:-\n\n",n);
    for(i = 0;i < n; i++)
    {
        scanf("%f",&x);
        sum=sum+x;
    }
    printf("\n\nThe Average of %d Elements are:- %f ",n,(sum/n));

}