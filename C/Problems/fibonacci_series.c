#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,show=0;
    printf("\n\nEnter the number of terms:-");
    scanf("%d",&n);
    show=a+b;
    printf("Series is : %d  %d ",a,b);
    for(i = 2; i < n; ++i)
    {
        printf(" %d ",show);
        a=b;
        b=show;
        show=a+b;
    }
}