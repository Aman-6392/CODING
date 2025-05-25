#include<stdio.h>
int main()
{
    int num,org,rev=0,rem=0;
    printf("Enter Number:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org==rev)
    {
        printf("Palindrome!!");
    }
    else
    {
        printf("Not Palindrome!!");
    }
}