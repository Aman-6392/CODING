#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Enter 5 No.");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=total*100/500;
    if(per>=60&&per<=100)
        printf("You are 1st :");
    else if(per >= 50 && per <= 60)
        printf("You are 2nd");
    else if(per >= 40 && per <= 50)
        printf("You are 3rd");
    else
        printf("You are Fail");
}