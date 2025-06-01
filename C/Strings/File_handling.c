#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    char name[20];
    int age,height;
    ptr=fopen("aman.txt","w");
    if(ptr==NULL)
    {
        printf("File Doesnot Exist!!");
        return 0;
    }
    printf("Enter Name:");
    scanf("%s",name);
    printf("\nEnter Age:");
    scanf("%d",&age);
    printf("\nEnter Height:");
    scanf("%d",&height);
    fprintf(ptr,"Name: %s\n",name);
    fprintf(ptr,"Age: %d",age);
    fprintf(ptr,"Height: %d",height);
    fclose(ptr);
    ptr=fopen("aman.txt","r");
    fscanf(ptr,"Name: %s",name);
    fscanf(ptr,"Age: %d",&age);
    fscanf(ptr,"Height: %d",&height);
    printf("\nName:%s",name);
    printf("\nAge:%d",age);
    printf("\nHeight:%d",height);
    fclose(ptr);
    return 0;
}