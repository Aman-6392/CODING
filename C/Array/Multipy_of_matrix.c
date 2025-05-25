#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],n,i,j,k,sum;
    printf("Enter 1st Matrix size:");
    scanf("%d",&n);
    printf("Enter Elements of 1st Matrix:");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Element of 2nd Matrix:");
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &b[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<n; k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    }
    printf("The Result Matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}