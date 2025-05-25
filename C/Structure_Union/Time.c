#include<stdio.h>
struct time
{
    int sec;
    int min;
    int hour;
};
int main()
{
    struct time t1,t2,diff;
    printf("Enter t1 Time:");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    printf("Enter t2 Time:");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    while(t2.sec>t1.sec)
    {
        --t1.min;
        t1.sec=t1.sec+60;
    }
    diff.sec=t1.sec-t2.sec;
    while(t2.min>t1.min)
    {
        --t1.hour;
        t1.min=t1.min+60;
    }
    diff.min=t1.min-t2.min;
    while(t2.hour>t1.hour)
    {
        t1.hour=t1.hour+24;
    }
    diff.hour=t1.hour-t2.hour;
    printf("time difference is %d:%d:%d",diff.hour,diff.min,diff.sec);
}
