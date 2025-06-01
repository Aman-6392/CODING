#include<stdio.h>
int main()
{
    int i,j,num,n,a[100][100],occ=0;
    printf("Enter Size Of Matrix:");
    scanf("%d",&n);
    printf("Enter Matrix:");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The Number Occurence to Find:");
    scanf("%d",&num);
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            if(num==a[i][j])
            {
                occ=occ+1;
            }
        }
    }
    printf("Occurence of %d is %d",num,occ);
}