#include<stdio.h>
int main()
{
    int a[100],n,i;
    int *ptr=a;
    printf("Enter Size of Array:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        printf("Value at a[%d]=%d\n",i,*ptr);
        ptr++;
    }
}