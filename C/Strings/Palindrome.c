#include<stdio.h>
#include<string.h>
int main()
{
    char word[200],rev[200];
    int i,length,x;
    printf("Enter String:");
    gets(word);
    for(i=0;word[i]!='\0';i++)
    {
        length++;
    }
    for(i=length-1;i>=0;i--)
    {
        rev[length-1-i]=word[i];
    }
    for(i=0;i<length;i++)
    {
        if(rev[i]==word[i])
        {
            x=1;
        }
        else
        {
            x=0;
        }
    }
    if(x==1)
    {
        printf("Palindrome!!");
    }
    else
    {
        printf("Not Palindrome!!");
    }
}