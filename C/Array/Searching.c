#include<stdio.h>
int main()
{
    int a[100],n,i,find,x;
    printf("Size Of Array:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value to find:");
    scanf("%d",&find);
    for(i=0;i<n;++i)
    {
        if(a[i]==find)
        {
            x=i;
        }
    }
    if(x==i)
    {
        printf("Founded at Index:%d",x);
    }
    else
    {
        printf("Not Found!!");
    }
}