#include<stdio.h>
int main()
{
    int x,y,*a,*b,temp;
    printf("Enter Numbers:");
    scanf("%d %d",&x,&y);
    printf("Before Swap: %d %d",x,y);
    printf("\n");
    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After Swap: %d %d",*a,*b);
}