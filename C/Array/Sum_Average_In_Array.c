#include<stdio.h>
int main()
{
    int i,a[1000],n;
    float sum=0;
    float avg;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    printf("Enter Number in Array:");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);   
    }
    for (i = 0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum=%.2f",sum);
    avg=sum/n;
    printf("Average=%.2f",avg);
    return 0;
}