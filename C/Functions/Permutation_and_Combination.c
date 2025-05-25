#include<stdio.h>
int fact(int n)
{
    int x=1,i;
    for(i=1;i<=n;++i)
    {
        x=x*i;
    }
    return x;
}
int main()
{
    int n,r,per,com;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    per=fact(n)/fact(n-r);
    com=per/fact(r);
    printf("Permutation is:%d\n",per);
    printf("Combination is:%d\n",com);
}