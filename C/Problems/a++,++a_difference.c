#include<stdio.h>
void main()
{
    int a,i;
    {printf("\nWhen i++ = ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",i);
    }}
    {printf("\nWhen ++i = ");
    for(i=0;i<10;++i)
    {
        printf("%d\t",i);
    }}
    {printf("\nWhen i-- = ");
    for(i=0;i>-10;i--)
    {
        printf("%d\t",i);
    }}
    {printf("\nWhen --i = ");
    for(i=0;i>-10;--i)
    {
        printf("%d\t",i);
    }}
}