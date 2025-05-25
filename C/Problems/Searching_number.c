#include<stdio.h>
int main()
{
    int a[10],i,t;
    printf("Enter Array:");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no to be searched:");
    scanf("%d",&t);
    for(i=0;i<=9;i++)
    {
        if (t==a[i])
        {
            printf("No is Found");
            break;
        }
        
    }
    if (i==10)
    {
        printf("No is not found");
    }
    return 0;
}