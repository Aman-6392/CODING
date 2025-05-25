#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n;
    int sum = 0;
    printf("Enter Size Of Array:");
    scanf("%d", &n);
    arr = (int*) malloc(n*sizeof(int));
    printf("Enter Elements:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (arr+i));
    }
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d", sum);
}